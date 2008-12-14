/*
 * ini.cpp
 *
 *  Created on: 13 déc. 2008
 *      Author: hli
 */

#include "ini.h"
#include "error.h"
#include "log.h"

#include <map>
#include <fstream>
#include <exception>

typedef std::map< std::string, std::string > vmap_t;
typedef std::map< std::string, vmap_t      > smap_t;

static const char *ini_filename = "pspe4all.ini";
static const size_t max_line_size = 1024;
static smap_t ini_data;

static char *skip_white_space(char *s)
{
  while (::isspace(*s))
    ++s;
  return s;
}

static char *skip_text(char *s)
{
  while (::isalnum(*s) || *s == '_')
    ++s;
  return s;
}

static char *skip_till_end(char *s)
{
  while (*s != '\n' && s != 0)
    ++s;
  return s;
}

struct ini_exception_s : public std::exception
{
  virtual const char* what() const throw() { return "bad format"; }
};

char const *ini::filename()
{
  return ini_filename;
}

bool ini::load()
{
  tracef(misc, "Loading '%s'...", filename());

  ini_data.clear();

  ini_exception_s bad_ini;

  bool loaded = true;

  std::ifstream f;

  f.exceptions(std::ifstream::failbit | std::ifstream::badbit);

  try
  {
    f.open(ini_filename);

    vmap_t *section = NULL;

    char line[max_line_size];

    for (;;)
    {
      f.getline(line, max_line_size);
      char *start = skip_white_space(line);

      if (*start == '[')
      {
        char *end = skip_text(++start);
        if (*end != ']' || (end - start) == 1)
        {
          throw bad_ini;
        }
        section = &ini_data[std::string(start, 0, end - start)];
      }
      else if (section != NULL && isalnum(*start) || *start == '_')
      {
        char *end = skip_text(start);
        std::string name = std::string(start, 0, end - start);

        start = skip_white_space(end);
        if (*start != '=')
        {
          throw bad_ini;
        }

        ++start;
        if (*start == ' ')
        {
          ++start;
        }
        end = skip_till_end(start);

        (*section)[name] = std::string(start, 0, end - start);
      }
      else if (*start != 0)
      {
        throw bad_ini;
      }
    }
  }
  catch (std::ifstream::failure &e)
  {
    if (!f.eof())
    {
      error::set("Failed to load '%s' file.", filename());
      loaded = false;
    }
  }
  catch (std::exception &e)
  {
    error::set("Failed to load '%s' file: %s.", filename(), e.what());
    loaded = false;
  }

  if (f.is_open())
  {
    f.close();
  }
  return loaded;
}

bool ini::save()
{
  tracef(misc, "Saving '%s'...", filename());

  bool saved = true;

  std::ofstream f;
  f.exceptions(std::ofstream::failbit | std::ofstream::badbit);

  try
  {
    f.open(ini_filename);
    smap_t::const_iterator i;
    for (i = ini_data.begin(); i != ini_data.end(); ++i)
    {
      f << "[" << i->first << "]" << std::endl;
      vmap_t::const_iterator j;
      for (j = i->second.begin(); j != i->second.end(); ++j)
        f << j->first << " = " << j->second << std::endl;
      f << std::endl;
    }
  }
  catch (std::ofstream::failure &e)
  {
    error::set("Failed to save '%s' file.", filename());
    saved = false;
  }

  if (f.is_open())
  {
    f.close();
  }
  return saved;
}

void ini::set(std::string const &section, std::string const &name, bool value)
{
  ini_data[section][name] = value ? "true" : "false";
}

void ini::set(std::string const &section, std::string const &name, s32 value)
{
  char tmp[12];
  ::sprintf(tmp, "%d", value);
  ini_data[section][name] = tmp;
}

void ini::set(std::string const &section, std::string const &name, u32 value)
{
  char tmp[11];
  ::sprintf(tmp, "%u", value);
  ini_data[section][name] = tmp;
}

void ini::set(std::string const &section, std::string const &name, std::string const &value)
{
  ini_data[section][name] = value;
}

bool ini::get(std::string const &section, std::string const &name, bool &value, bool def)
{
  vmap_t &data = ini_data[section];

  if (data.find(name) == data.end())
  {
    set(section, name, def);
    value = def;
    return false;
  }
  else
  {
    if (data[name] == "true")
    {
      value = true;
      return true;
    }
    else if (data[name] == "false")
    {
      value = false;
      return true;
    }
    else
    {
      set(section, name, def);
      value = def;
      return false;
    }
  }
}

bool ini::get(std::string const &section, std::string const &name, s32 &value, s32 def)
{
  vmap_t &data = ini_data[section];
  if (data.find(name) == data.end())
  {
    set(section, name, def);
    value = def;
    return false;
  }
  else
  {
    const char *s = data[name].c_str();
    s32 num;
    if (!sscanf(s, "%d", &num))
    {
      set(section, name, def);
      value = def;
      return false;
    }
    else
    {
      value = num;
      return true;
    }
  }
}

bool ini::get(std::string const &section, std::string const &name, u32 &value, u32 def)
{
  vmap_t &data = ini_data[section];
  if (data.find(name) == data.end())
  {
    set(section, name, def);
    value = def;
    return false;
  }
  else
  {
    const char *s = data[name].c_str();
    u32 num;
    if (!sscanf(s, "%u", &num))
    {
      set(section, name, def);
      value = def;
      return false;
    }
    else
    {
      value = num;
      return true;
    }
  }
}

bool ini::get(std::string const &section, std::string const &name, std::string &value, std::string const &def)
{
  vmap_t &data = ini_data[section];
  if (data.find(name) == data.end())
  {
    set(section, name, def);
    value = def;
    return false;
  }
  else
  {
    value = data[name];
    return true;
  }
}
