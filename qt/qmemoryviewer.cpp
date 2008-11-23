#include "qmemoryviewer.h"

QMemoryViewer::QMemoryViewer(QWidget *parent)
: QWidget(parent)
{
  ui.setupUi(this);
}

QMemoryViewer::~QMemoryViewer()
{
}

void QMemoryViewer::setScrollBarRange(int low, int high)
{
#if 0
  int bytesPerLine = ui.qmemoryeditor_widget->bytesPerLine();
  int bytesPerPage = ui.qmemoryeditor_widget->bytesPerPage();

  ui.memoryeditor_scrollbar->setRange(0, (high - low) / bytesPerLine);
  ui.memoryeditor_scrollbar->setSingleStep(1);
  ui.memoryeditor_scrollbar->setPageStep(bytesPerPage / bytesPerLine);
#endif
}
