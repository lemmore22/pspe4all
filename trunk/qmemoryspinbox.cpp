/*
 * qmemoryspinbox.cpp
 *
 *  Created on: 16 nov. 2008
 *      Author: hli
 */

#include "qmemoryspinbox.h"
#include "QtGui/QMessageBox"

QMemorySpinBox::QMemorySpinBox(QWidget *parent)
: QSpinBox(parent)
{
}

QMemorySpinBox::~QMemorySpinBox()
{
}

QValidator::State QMemorySpinBox::validate(QString &input, int &pos) const
{
  if (isxdigit(input[pos].cell()))
  {
    if (input.size() < 8)
      return QValidator::Intermediate;
    else if (input.size() == 8)
      return QValidator::Acceptable;
  }
  return QValidator::Invalid;
}

QString QMemorySpinBox::textFromValue(int value) const
{
  return QString("%1").arg((unsigned int)value, 8, 16, QChar('0')).toUpper();
}

int QMemorySpinBox::valueFromText(const QString &text) const
{
  return text.toInt(0, 16);
}
