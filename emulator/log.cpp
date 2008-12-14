/*
 * log.cpp
 *
 *  Created on: 13 déc. 2008
 *      Author: hli
 */

#ifndef NO_LOGGING

#include "log.h"

log_s log::misc;

void log::reset()
{
  log::misc = log_s("misc");
}


#include "ini.h"

#include <string>
#include <map>

#include <cstdio>

#include "types.h"
#include "language.h"

typedef std::map< std::string, FILE * > lmap_t;
typedef std::map< FILE *, u32         > rmap_t;

static lmap_t lmap;
static rmap_t rmap;
static bool use_console_flag = false;

void log_s::use_console(bool use)
{
  use_console_flag = use;
}

static FILE *get_logfile(std::string const &logname)
{
  std::string filename("pspe4all.log");
  lmap_t::iterator i = lmap.find(filename);

  if (i == lmap.end())
  {
    FILE *file = ::fopen(filename.c_str(), "w");
    lmap[filename] = file;
    rmap[file] = 1;
    return file;
  }
  else
  {
    FILE *file = i->second;
    assert(rmap[file] != 0);
    ++rmap[file];
    return file;
  }
}

log_s::log_s()
: file(NULL)
{
}

log_s::log_s(std::string const &name)
: name(name)
{
  file = get_logfile(name);

  u32 value;
  ini::get("logging", name, value, OFF);
  level = (level_e)value;
}

log_s::log_s(log_s const &other)
: level(other.level), file(other.file), name(other.name)
{
  if (file != NULL)
  {
    ++rmap[file];
  }
}

log_s::~log_s()
{
  if (!file)
    return;

  rmap_t::iterator i = rmap.find(file);

  if (i == rmap.end())
    return;

  --i->second;
  if (i->second == 0)
  {
    ::fclose(file);
    rmap.erase(i);

    set_level(level);
  }
}

void log_s::operator =(log_s const &other)
{
  level = other.level;
  name = other.name;
  file = other.file;
  if (!file)
    ++rmap[file];
}

log_s::level_e log_s::get_level() const
{
  return level;
}

void log_s::set_level(log_s::level_e level)
{
  u32 value = level;
  ini::set("logging", name, value);
  this->level = level;
}

bool log_s::check_level(log_s::level_e level) const
{
  return this->level <= level;
}

void log_s::printf(log_s::level_e level, const char *fmt, va_list args)
{
  static char const * const level_name[] =
    { "OFF", "FATAL", "ERROR", "WARN", "INFO", "DEBUG", "TRACE" };

  if (check_level(level) && !file && !use_console_flag)
    return;

  char const * const namez = name.c_str();
  char const * const levelz = level_name[level];

  char tmp1[256];
  char tmp2[1024];

  ::snprintf(tmp1, sizeof(tmp1), "[%s][%s] %%s\n", levelz, namez);
  language::printf(tmp2, tmp1, args);

  if (file)
  {
    ::fprintf(file, "%s", tmp2);
  }

  if (use_console_flag)
  {
    ::printf("%s", tmp2);
  }

  ::snprintf(tmp1, sizeof(tmp1), "[<b>%s</b>][<i>%s</i>] %%s", levelz, namez);
  language::printf(tmp2, tmp1, args);

  log::show(tmp2);
}

#endif
