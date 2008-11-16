/*
 * qmemorytreemodel.h
 *
 *  Created on: 16 nov. 2008
 *      Author: hli
 */

#ifndef QMEMORYTREEMODEL_H_
#define QMEMORYTREEMODEL_H_

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include "emulator/types.h"

class TreeItem;

class QMemoryTreeModel: public QAbstractItemModel
{
  Q_OBJECT

  public:
    QMemoryTreeModel(QObject *parent = 0);
    ~QMemoryTreeModel();

    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role =
        Qt::DisplayRole) const;
    QModelIndex index(int row, int column, const QModelIndex &parent =
        QModelIndex()) const;
    QModelIndex parent(const QModelIndex &index) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QModelIndex setAddress(int address);
    void setAddressRange(int choice);

  public slots:
    void setAddressRange(int start, int end);

  private:
    unsigned int m_address_start;
    unsigned int m_address_end;
};
#endif /* QMEMORYTREEMODEL_H_ */
