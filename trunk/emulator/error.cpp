/*
 * error.cpp
 *
 *  Created on: 13 déc. 2008
 *      Author: hli
 */

#include <cstdio>
#include <cstring>

#include "error.h"
#include "language.h"

static const size_t error_msg_size = 1024;
static bool error_flag = false;
static char error_msg[error_msg_size] = "";

void error::set(const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  set(fmt, args);
  va_end(args);
}

void error::set(const char *fmt, va_list args)
{
  if (fmt)
  {
    language::printf(error_msg, fmt, args);
    error_flag = true;
  }
  else if (!error_flag)
  {
    language::printf(error_msg, "Unknown error !");
  }
}

const char *error::get()
{
  return error_msg;
}

// this one should be defined somewhere else because it is platform-dependent
void error::show(char const *fmt, ...);

void error::clear()
{
  error_flag = false;
}

bool error::is_set()
{
  return !error_flag;
}

