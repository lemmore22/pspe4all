/*
 * qmemorytreemodel.cpp
 *
 *  Created on: 16 nov. 2008
 *      Author: hli
 */

#include <QtGui>

#include "qmemorytreemodel.h"

#include "emulator/memory.h"

QMemoryTreeModel::QMemoryTreeModel(QObject *parent)
: QAbstractItemModel(parent),
  m_address_start(0x00010000),
  m_address_end(0x00013FFF)
{
}

QMemoryTreeModel::~QMemoryTreeModel()
{
}

int QMemoryTreeModel::columnCount(const QModelIndex &parent) const
{
  return 3;
}

QVariant QMemoryTreeModel::data(const QModelIndex &index, int role) const
{
  if (!index.isValid())
    return QVariant();

  if (role != Qt::DisplayRole)
    return QVariant();

  unsigned int address = (index.row() * 16) + m_address_start;

  if (address < m_address_end)
  {
    unsigned char *mem8 = psp::addrbu(address);

    unsigned char tmp[17];

    memcpy(tmp, mem8, 16);
    tmp[16] = '\0';

    switch (index.column())
    {
      case 0:
        return QString("%1")
        .arg(address, 8, 16, QChar('0')).toUpper();
      case 1:
        return QString("%1 %2 %3 %4 %5 %6 %7 %8 %9 %10 %11 %12 %13 %14 %15 %16")
        .arg(mem8[ 0], 2, 16, QChar('0'))
        .arg(mem8[ 1], 2, 16, QChar('0'))
        .arg(mem8[ 2], 2, 16, QChar('0'))
        .arg(mem8[ 3], 2, 16, QChar('0'))
        .arg(mem8[ 4], 2, 16, QChar('0'))
        .arg(mem8[ 5], 2, 16, QChar('0'))
        .arg(mem8[ 6], 2, 16, QChar('0'))
        .arg(mem8[ 7], 2, 16, QChar('0'))
        .arg(mem8[ 8], 2, 16, QChar('0'))
        .arg(mem8[ 9], 2, 16, QChar('0'))
        .arg(mem8[10], 2, 16, QChar('0'))
        .arg(mem8[11], 2, 16, QChar('0'))
        .arg(mem8[12], 2, 16, QChar('0'))
        .arg(mem8[13], 2, 16, QChar('0'))
        .arg(mem8[14], 2, 16, QChar('0'))
        .arg(mem8[15], 2, 16, QChar('0'))
        .toUpper();
      case 2:
        for (int i = 0; i < 16; ++i)
        {
          if (!isgraph(tmp[i])) tmp[i] = '.';
        }
        return QString((char *)tmp).toUpper();
    }
  }

  return QVariant();
}

Qt::ItemFlags QMemoryTreeModel::flags(const QModelIndex &index) const
{
  if (!index.isValid())
    return 0;

  return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

QVariant QMemoryTreeModel::headerData(
    int section,
    Qt::Orientation orientation,
    int role) const
{
  if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
  {
    switch (section)
    {
      case 0:
        return QString("Address");

      case 1:
        return QString("Data");

      case 2:
        return QString("Text");
    }
  }

  return QVariant();
}

QModelIndex QMemoryTreeModel::index(
    int row,
    int column,
    const QModelIndex &parent) const
{
  if (!hasIndex(row, column, parent))
    return QModelIndex();

  unsigned int address = (row * 16) + m_address_start;

  if (address < m_address_end)
    return createIndex(row, column, 0);

  return QModelIndex();
}

QModelIndex QMemoryTreeModel::parent(const QModelIndex &index) const
{
  return QModelIndex();
}

int QMemoryTreeModel::rowCount(const QModelIndex &parent) const
{
  if (parent.isValid())
    return 0;

  return (m_address_end - m_address_start) / 16;
}

QModelIndex QMemoryTreeModel::setAddress(int address)
{
  if (m_address_start <= unsigned(address) && unsigned(address) <= m_address_end)
  {
    return index((address - m_address_start) / 16, 0);
  }

  return QModelIndex();
}

void QMemoryTreeModel::setAddressRange(int start, int end)
{
  m_address_start = start;
  m_address_end = end;
  this->reset();
}

void QMemoryTreeModel::setAddressRange(int choice)
{
  switch (choice)
  {
    case 0:
      m_address_start = 0x00010000;
      m_address_end = 0x00013FFF;
      break;
    case 1:
      m_address_start = 0x04000000;
      m_address_end = 0x043FFFFF;
      break;
    case 2:
      //m_address_start = 0x04400000;
      //m_address_end = 0x047FFFFFF;
      break;
    case 3:
      m_address_start = 0x08000000;
      m_address_end = 0x087FFFFF;
      break;
    case 4:
      m_address_start = 0x08800000;
      m_address_end = 0x09FFFFFF;
      break;
    case 5:
      m_address_start = 0x0A000000;
      m_address_end = 0x0BFFFFFF;
      break;
  }
  this->reset();
}
