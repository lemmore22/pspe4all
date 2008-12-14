/*
 * error.h
 *
 *  Created on: 13 d�c. 2008
 *      Author: hli
 */

#ifndef ERROR_H_
#define ERROR_H_

#include <cstdarg>

namespace error
{
  void set(char const *fmt, ...);

  void set(char const *fmt, va_list args);

  const char *get();

  void show(char const *fmt = NULL, ...);

  void clear();

  bool is_set();
};

#endif /* ERROR_H_ */
