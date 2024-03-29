//#include "local.h"
#include <limits.h>
#include <stdexcept>
#include <QtGlobal>
#include "qmemorycursor.h"

QMemoryCursor::QMemoryCursor(
    int byteOffset,
    int charOffset,
    int low,
    int high,
    int charsPerByte)
: m_byteOffset(byteOffset)
, m_charOffset(charOffset)
, m_low(low)
, m_high(high)
, m_charsPerByte(charsPerByte)
{}

bool QMemoryCursor::setRange(int low, int high)
{
  if (low > high)
  {
    return false;
  }
  m_low = low;
  m_high = high;
  return true;
}

int QMemoryCursor::decrByByte(int n)
{
  if (n > m_byteOffset)
  {
    return OutOfRange;
  }
  else
  {
    m_byteOffset -= n;
  }
  return m_byteOffset;
}
int QMemoryCursor::decrByChar(int n)
{
  int byteDelta = n / m_charsPerByte;
  int charDelta = n % m_charsPerByte;

  if (charDelta > m_charOffset)
  {
    if (byteDelta == LONG_MAX )
    {
      throw std::out_of_range("Cursor decrement underflowed.\n");
    }
    byteDelta++;
  }

  if (byteDelta && OutOfRange == decrByByte(byteDelta))
  {
    return m_charOffset;
  }

  if (charDelta > m_charOffset)
  {
    m_charOffset = (m_charsPerByte) - (charDelta - m_charOffset);
  }
  else
  {
    m_charOffset -= charDelta;
  }
  return m_charOffset;
}

int QMemoryCursor::incrByChar(int n)
{
  int byteDelta = n / m_charsPerByte;
  int charDelta = n % m_charsPerByte;

  if (charDelta + m_charOffset >= m_charsPerByte)
  {
    if (byteDelta == LONG_MAX)
    {
      throw std::out_of_range("Cursor increment exceeded maximum offset.\n");
    }
    byteDelta++;
  }
  if (byteDelta && OutOfRange == incrByByte(byteDelta))
  {
    return m_charOffset;
  }
  m_charOffset = (charDelta + m_charOffset) % m_charsPerByte;
  return m_charOffset;
}

int QMemoryCursor::incrByByte(int byteDelta)
{
  if (byteDelta > LONG_MAX - m_byteOffset)
  {
    throw std::out_of_range("Cursor increment exceeded maximum offset.\n");
  }
  if (m_byteOffset + byteDelta >= m_high)
    return OutOfRange;
  return (m_byteOffset += byteDelta);
}

int QMemoryCursor::byteOffset() const
{
  return m_byteOffset;
}
int QMemoryCursor::charOffset() const
{
  return m_charOffset;
}

int QMemoryCursor::setCharsPerByte( int charsPerByte )
{
  m_charsPerByte = charsPerByte;
  m_charOffset = qMin(m_charOffset, charsPerByte - 1);
  return m_charsPerByte;
}

void QMemoryCursor::setOffset(int byteOffset, int charOffset)
{
  assignClamped(m_byteOffset, byteOffset, 0, m_high);
  assignClamped(m_charOffset, charOffset, 0, m_charsPerByte);
}

int QMemoryCursor::charOffsetAbsolute() const
{
  return m_byteOffset * m_charsPerByte + m_charOffset;
}

void QMemoryCursor::assignClamped(int &dst, int src, int low, int high)
{
  if (src < low)
  {
    dst = low;
  }
  else if (src >= high)
  {
    dst = high - 1;
  }
  else
  {
    dst = src;
  }
}
