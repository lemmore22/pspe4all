#include "qmemorytreeview.h"
#include "qmemorytreemodel.h"
#include "QtGui/QHeaderView"
#include "QtGui/QMessageBox"

QMemoryTreeView::QMemoryTreeView(QWidget *parent)
: QTreeView(parent)
{
  QHeaderView *h = header();
  h->setMovable(false);
  h->setResizeMode(QHeaderView::Fixed);
  h->setStretchLastSection(true);
  setModel(new QMemoryTreeModel());
  setColumnWidth(0, 64);
  setColumnWidth(1, 336);
}

QMemoryTreeView::~QMemoryTreeView()
{

}

void QMemoryTreeView::changeFont(const QFont &font)
{
  setFont(font);
}

void QMemoryTreeView::changeAddress(int address)
{
  QMemoryTreeModel *that = dynamic_cast< QMemoryTreeModel * >(model());
  QModelIndex index = that->setAddress(address);
  if (index.isValid())
  {
    setCurrentIndex(index);
    scrollTo(index, QAbstractItemView::PositionAtCenter);
  }
}

void QMemoryTreeView::changeAddressRange(int choice)
{
  QMemoryTreeModel *that = dynamic_cast< QMemoryTreeModel * >(model());
  that->setAddressRange(choice);
}

