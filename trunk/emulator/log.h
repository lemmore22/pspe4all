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

struct log_s
{
  public:
    enum level_e
    {
      OFF,
      FATAL,
      ERROR,
      WARN,
      INFO,
      DEBUG,
      TRACE
    };

#ifndef NO_LOGGING
    log_s();
    log_s(std::string const &name);
    log_s(log_s const &);
    ~log_s();

    void operator = (log_s const &);

    static void use_console(bool use);

    level_e get_level() const;
    void    set_level(level_e level);
    bool    check_level(level_e level) const;

    void log(level_e level, const char *fmt, ...) { va_list args; va_start(args, fmt); printf(level, fmt, args); va_end(args); }

    void fatal(const char *fmt, ...) { va_list args; va_start(args, fmt); printf(FATAL, fmt, args); va_end(args); }
    void error(const char *fmt, ...) { va_list args; va_start(args, fmt); printf(ERROR, fmt, args); va_end(args); }
    void warn (const char *fmt, ...) { va_list args; va_start(args, fmt); printf(WARN, fmt, args); va_end(args); }
    void info (const char *fmt, ...) { va_list args; va_start(args, fmt); printf(INFO , fmt, args); va_end(args); }
    void debug(const char *fmt, ...) { va_list args; va_start(args, fmt); printf(DEBUG, fmt, args); va_end(args); }
    void trace(const char *fmt, ...) { va_list args; va_start(args, fmt); printf(TRACE, fmt, args); va_end(args); }

  private:
    void printf(level_e level, const char *fmt, va_list args);

    level_e     level;
    FILE       *file;
    std::string name;
#else
    log_s() {}
    log_s(std::string const &name) {}
    log_s(log_s const &) {}
    ~log_s() {}

    void operator = (log_s const &) {}

    static void use_console(bool use) {}

    level_e get_level() const { return off; }
    void    set_level(level_e level);
    bool    check_level(level_e level) const { return false; }

#endif
};

#ifdef NO_LOGGING
#define logf(name, level, fmt, ...)
#define fatalf(name, fmt, ...)
#define errorf(name, fmt, ...)
#define warnf (name, fmt, ...)
#define infof (name, fmt, ...)
#define debugf(name, fmt, ...)
#define tracef(name, fmt, ...)
#else
#define logf(name, level, fmt, ...) log::name.log(level, fmt, ## __VA_ARGS__)
#define fatalf(name, fmt, ...) log::name.fatal(fmt, ## __VA_ARGS__)
#define errorf(name, fmt, ...) log::name.error(fmt, ## __VA_ARGS__)
#define warnf (name, fmt, ...) log::name.warn(fmt, ## __VA_ARGS__)
#define infof (name, fmt, ...) log::name.info(fmt, ## __VA_ARGS__)
#define debugf(name, fmt, ...) log::name.debug(fmt, ## __VA_ARGS__)
#define tracef(name, fmt, ...) log::name.trace(fmt, ## __VA_ARGS__)
#endif

namespace log
{
  void show(const char *s);

  void reset();

  extern log_s misc;
}

#endif /* LOG_H_ */
