#include "qmemoryscrollbar.h"

QMemoryScrollBar::QMemoryScrollBar(QWidget *parent)
: QScrollBar(parent)
{
}

QMemoryScrollBar::QMemoryScrollBar(Qt::Orientation orientation, QWidget *parent)
: QScrollBar(orientation, parent)
{
}

QMemoryScrollBar::~QMemoryScrollBar()
{
}

void QMemoryScrollBar::changeRange(int min, int max)
{
  QScrollBar::setRange(min, max);
}

