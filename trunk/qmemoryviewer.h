#ifndef QMEMORYVIEWER_H
#define QMEMORYVIEWER_H

#include <QtGui/QWidget>
#include "ui_qmemoryviewer.h"

class QMemoryViewer : public QWidget
{
  Q_OBJECT

public:
  QMemoryViewer(QWidget *parent = 0);
  ~QMemoryViewer();

private:
  Ui::QMemoryViewerClass ui;
};

#endif // QMEMORYVIEWER_H
