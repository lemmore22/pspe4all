/*
 * implementation.cpp
 *
 *  Created on: 14 déc. 2008
 *      Author: hli
 */

#include <cstdio>
#include <QMessageBox>
#include <QString>
#include <QByteArray>

#include "qpspe4all.h"

#include "../emulator/error.h"

void Error::show(char const *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  set(fmt, args);
  va_end(args);
  QMessageBox::critical(0, QObject::tr("Qt PSP Emulator For All"), Error::get());
}

#include "../emulator/lang.h"

void Lang::printf(char *s, char const *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  ::vsnprintf(s, 1024, QObject::tr(fmt).toAscii().constData(), args);
  va_end(args);
}

void Lang::printf(char *s, char const *fmt, va_list args)
{
  ::vsnprintf(s, 1024, QObject::tr(fmt).toAscii().constData(), args);
}

#include "../emulator/log.h"

void Log::show(const char * s)
{
  if (QPspe4all::that) QPspe4all::that->log(QString(s));
}


