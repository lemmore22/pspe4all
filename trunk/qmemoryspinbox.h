/*
 * qmemoryspinbox.h
 *
 *  Created on: 16 nov. 2008
 *      Author: hli
 */

#ifndef QMEMORYSPINBOX_H_
#define QMEMORYSPINBOX_H_

#include <QtGui/QSpinBox>

class QMemorySpinBox : public QSpinBox
{
  Q_OBJECT

public:
  QMemorySpinBox(QWidget *parent = 0);
  ~QMemorySpinBox();

  QValidator::State validate(QString &input, int &pos) const;

protected:
  QString textFromValue(int value) const;
  int valueFromText(const QString &text) const;
};

#endif /* QMEMORYSPINBOX_H_ */
