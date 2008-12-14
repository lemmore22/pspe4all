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

  public slots:
    //void changeAddressRange(int choice);
    //void changeAddressRange(int low, int high);
    void setScrollBarRange(int low, int high);

  private:
    Ui::QMemoryEditor ui;
};

#endif // QMEMORYVIEWER_H
