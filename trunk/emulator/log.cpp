/*
 * log.cpp
 *
 *  Created on: 13 déc. 2008
 *      Author: hli
 */

#ifndef NO_LOGGING

#include "log.h"

LogFile Log::misc("misc");
LogFile Log::memory("memory");
LogFile Log::interpreter("interpreter");

#include "ini.h"
#include "lang.h"

#include <string>
#include <map>

#include <cstdio>
#include <cstdarg>
#include <cassert>

static bool use_console_flag = true;

void LogFile::useConsole(bool use)
{
  use_console_flag = use;
}

static FILE *getLogFile(std::string const &logname)
{
  static std::string filename("emulator.log");
  static FILE *file = ::fopen(filename.c_str(), "w");
  return file;
}

void LogFile::reset()
{
  if (file)
  {
    ::fclose(file);
  }

  file = getLogFile(name);

  unsigned int value = E_TRACE;
  Ini::get("log", name, value, E_OFF);
  level = (LevelEnum) value;
}

LogFile::LogFile(std::string const &name) :
  name(name)
{
  file = getLogFile(name);

  unsigned int value = E_TRACE;
  Ini::get("log", name, value, E_OFF);
  level = (LevelEnum) value;
}

void LogFile::flush()
{
  if (!file)
    return;

  ::fflush(file);
}

LogFile::~LogFile()
{
  if (!file)
    return;

  ::fclose(file);

  setLevel(level);
}

LogFile::LevelEnum LogFile::getLevel() const
{
  return level;
}

void LogFile::setLevel(LogFile::LevelEnum level)
{
  unsigned int value = level;
  Ini::set("log", name, value);
  this->level = level;
}

bool LogFile::checkLevel(LogFile::LevelEnum level) const
{
  return this->level <= level;
}

void LogFile::printf(LogFile::LevelEnum level, const char *fmt, va_list args)
{
  static char const * const level_name[] =
    { "E_OFF", "E_FATAL", "E_ERROR", "E_WARN", "E_INFO", "E_DEBUG", "E_TRACE" };

  if (checkLevel(level) && !file && !use_console_flag)
    return;

  char const * const namez = name.c_str();
  char const * const levelz = level_name[level];

  char tmp1[1024];
  char tmp2[1024];
  char tmp3[1024];

  Lang::printf(tmp1, fmt, args);
  Lang::printf(tmp2 +   0, namez);
  Lang::printf(tmp2 + 512, levelz);

  ::sprintf(tmp3, "[%s][%s] %s\n", tmp2 + 0, tmp2 + 512, tmp1);

  if (file)
  {
    ::fprintf(file, "%s", tmp3);
  }

  if (use_console_flag)
  {
    ::printf("%s", tmp3);
  }

  ::sprintf(tmp3, "[<b>%s</b>][<i>%s</i>] %s", tmp2 + 0,  tmp2 + 512, tmp1);

  Log::show(tmp3);
}

#endif
