#ifndef QMEMORYSCROLLBAR_H
#define QMEMORYSCROLLBAR_H

#include <QtGui/QWidget>
#include <QtGui/QScrollBar>

class QMemoryScrollBar : public QScrollBar
{
    Q_OBJECT

  public:
    QMemoryScrollBar(QWidget *parent = 0);
    QMemoryScrollBar(Qt::Orientation orientation, QWidget *parent = 0);
    ~QMemoryScrollBar();

  public slots:
    void changeRange(int min, int max);
};

#endif // QMEMORYSCROLLBAR_H
