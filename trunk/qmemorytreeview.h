#ifndef QMEMORYTREEVIEW_H
#define QMEMORYTREEVIEW_H

#include <QtGui/QTreeView>

class QMemoryTreeView : public QTreeView
{
  Q_OBJECT

public:
  QMemoryTreeView(QWidget *parent = 0);
  ~QMemoryTreeView();

public slots:
  void changeFont(const QFont &font);
  void changeAddress(int address);
  void changeAddressRange(int choice);
};

#endif // QMEMORYTREEVIEW_H
