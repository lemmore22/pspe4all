/*
 * language.h
 *
 *  Created on: 13 déc. 2008
 *      Author: hli
 */

#ifndef LANGUAGE_H_
#define LANGUAGE_H_

#include <cstdarg>

namespace language
{
  void printf(char *s, char const *fmt, ...);
  void printf(char *s, char const *fmt, va_list args);
}

#endif /* LANGUAGE_H_ */
