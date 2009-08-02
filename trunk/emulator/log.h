/*
 * log.h
 *
 *  Created on: 13 déc. 2008
 *      Author: hli
 */

#ifndef LOG_H_
#define LOG_H_

#include <string>

#include <cstdarg>

class LogFile
{
  public:
    enum LevelEnum
    {
      E_OFF, E_FATAL, E_ERROR, E_WARN, E_INFO, E_DEBUG, E_TRACE
    };

    LogFile(std::string const &name);
    ~LogFile();

    void reset();

    void flush();

    static void useConsole(bool use);

    LevelEnum getLevel() const;
    void setLevel(LevelEnum level);
    bool checkLevel(LevelEnum level) const;

    void log(LevelEnum level, const char *fmt, ...)
    {
      va_list args;
      va_start(args, fmt);
      printf(level, fmt, args);
      va_end(args);
    }

    void fatal(const char *fmt, ...)
    {
      va_list args;
      va_start(args, fmt);
      printf(E_FATAL, fmt, args);
      va_end(args);
    }
    void error(const char *fmt, ...)
    {
      va_list args;
      va_start(args, fmt);
      printf(E_ERROR, fmt, args);
      va_end(args);
    }
    void warn(const char *fmt, ...)
    {
      va_list args;
      va_start(args, fmt);
      printf(E_WARN, fmt, args);
      va_end(args);
    }
    void info(const char *fmt, ...)
    {
      va_list args;
      va_start(args, fmt);
      printf(E_INFO, fmt, args);
      va_end(args);
    }
    void debug(const char *fmt, ...)
    {
      va_list args;
      va_start(args, fmt);
      printf(E_DEBUG, fmt, args);
      va_end(args);
    }
    void trace(const char *fmt, ...)
    {
      va_list args;
      va_start(args, fmt);
      printf(E_TRACE, fmt, args);
      va_end(args);
    }

  private:
    void printf(LevelEnum level, const char *fmt, va_list args);

    LogFile(LogFile const &);
    void operator =(LogFile const &);

    LevelEnum level;
    FILE *file;
    std::string name;
};

#ifdef NO_LOGGING
#define lprintf(name, level, fmt, ...)
#define fatalf(name, fmt, ...)
#define errorf(name, fmt, ...)
#define warnf(name, fmt, ...)
#define infof(name, fmt, ...)
#define debugf(name, fmt, ...)
#define tracef(name, fmt, ...)
#else
#define lprintf(name, level, fmt, ...) Log::name.log(level, fmt, ## __VA_ARGS__)
#define fatalf(name, fmt, ...) Log::name.fatal(fmt, ## __VA_ARGS__)
#define errorf(name, fmt, ...) Log::name.error(fmt, ## __VA_ARGS__)
#define warnf(name, fmt, ...) Log::name.warn(fmt, ## __VA_ARGS__)
#define infof(name, fmt, ...) Log::name.info(fmt, ## __VA_ARGS__)
#define debugf(name, fmt, ...) Log::name.debug(fmt, ## __VA_ARGS__)
#define tracef(name, fmt, ...) Log::name.trace(fmt, ## __VA_ARGS__)
#endif

namespace Log
{
  void show(const char *s);

  void reset();

  extern LogFile misc;
  extern LogFile memory;
  extern LogFile interpreter;
}

#endif /* LOG_H_ */
