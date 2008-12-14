/*
 * ini.h
 *
 *  Created on: 13 déc. 2008
 *      Author: hli
 */

#ifndef INI_H_
#define INI_H_

#include <string>

#include "types.h"

namespace ini
{
  bool load();
  bool save();

  char const *filename();

  void set(std::string const &section, std::string const &name, bool value);
  void set(std::string const &section, std::string const &name, s32 value);
  void set(std::string const &section, std::string const &name, u32 value);
  void set(std::string const &section, std::string const &name, std::string const &value);

  bool get(std::string const &section, std::string const &name, bool &value, bool def = false);
  bool get(std::string const &section, std::string const &name, s32 &value, s32 def = 0);
  bool get(std::string const &section, std::string const &name, u32 &value, u32 def = 0);
  bool get(std::string const &section, std::string const &name, std::string &value, std::string const &def = std::string());
};

#endif /* INI_H_ */
