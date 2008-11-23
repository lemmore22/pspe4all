/*
 * QTranslate.h
 *
 *  Created on: 22 nov. 2008
 *      Author: hli
 */

#ifndef QTRANSLATE_H_
#define QTRANSLATE_H_

#include "../emulator/types.h"

#include <vector>
#include <QString>

namespace QTranslate
{
  const char *ByteToHex(u8 b);
  void ByteToHex(std::vector< u8 > &dst, const std::vector< u8 > &src);
  void ByteToChar(std::vector< u8 > &dst, const std::vector< u8 > &src);
  void ByteToOctal(std::vector< u8 > &dst, const std::vector< u8 > &src);
  void ByteToBinary(std::vector< u8 > &dst, const std::vector< u8 > &src);

  //void ByteToHex(QString &dst, const std::vector< u8 > &src);
  //void ByteToChar(QString &dst, const std::vector< u8 > &src);
  //void ByteToOctal(QString &dst, const std::vector< u8 > &src);
  //void ByteToBinary(QString &dst, const std::vector< u8 > &src);

  void ByteToHex(QString &dst, const u8 *src, int len);
  void ByteToChar(QString &dst, const u8 *src, int len);
  void ByteToOctal(QString &dst, const u8 *src, int len);
  void ByteToBinary(QString &dst, const u8 *src, int len);

  void BinaryToByte(std::vector< u8 > &dst, const std::vector< u8 > &src);

  void OctalToByte(std::vector< u8 > &dst, const std::vector< u8 > &src);

  void CharToByte(std::vector< u8 > &dst, const std::vector< u8 > &src);
  void CharToByte(std::vector< u8 > &dst, const QString &src);

  void HexToByte(std::vector< u8 > &dst, const std::vector< u8 > &src);
  void HexToByte(std::vector< u8 > &dst, const QString &src);
};

#endif /* QTRANSLATE_H_ */
