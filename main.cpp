#include "qpspe4all.h"

#include <QtGui>
#include <QApplication>

#include "emulator/emulator.h"

#if 0

#include <cstdio>

void create_instructions_file(char const *filepathname, const char *name)
{
  FILE *out = ::fopen(filepathname, "a");
  if (out)
  {
    ::fprintf(out, "#include \"instructions/%s.h\"\n", name);
    ::fclose(out);
  }
}

void create_instruction_file(
    char const *filepathname,
    const char *name,
    int signature,
    int mask)
{
  FILE *out = ::fopen(filepathname, "w");
  if (out)
  {
    ::fprintf(
        out,
          "template< > struct allegrex_instruction_template_s< 0x%08x, 0x%08x > : allegrex_instruction_unknown_s\n"
          "{\n"
          "    static allegrex_instruction_template_s &self()\n"
          "    {\n"
          "      static allegrex_instruction_template_s insn;\n"
          "      return insn;\n"
          "    }\n"
          "\n"
          "    static allegrex_instruction_s *get_instance()\n"
          "    {\n"
          "      return &allegrex_instruction_template_s::self();\n"
          "    }\n"
          "\n"
          "    virtual allegrex_instruction_s *instruction(int opcode)\n"
          "    {\n"
          "      return this;\n"
          "    }\n"
          "\n"
          "    virtual char const *opcode_name()\n"
          "    {\n"
          "      return \"%s\";\n"
          "    }\n"
          "\n"
          "    virtual int disassemble(unsigned int address, unsigned int insn, char *opcode_name, char *operands, char *comment)\n"
          "    {\n"
          "      ::strcpy(opcode_name, this->opcode_name());\n"
          "      ::strcpy(operands, \"\");\n"
          "      ::strcpy(comment, \"\");\n"
          "      return 0;\n"
          "    }\n"
          "\n"
          "  protected:\n"
          "    allegrex_instruction_template_s() {}\n"
          "};\n"
          "\n"
          "typedef allegrex_instruction_template_s< 0x%08x, 0x%08x >\n"
          "  allegrex_instruction_%s_s;\n"
          "\n"
          "namespace allegrex_n\n"
          "{\n"
          "  extern allegrex_instruction_%s_s &%s;\n"
          "}\n"
          "#ifdef IMPLEMENT_INSTRUCTION\n"
          "allegrex_instruction_%s_s &allegrex_n::%s =\n"
          "  allegrex_instruction_%s_s::self();\n"
          "#endif\n",
        signature,
        mask,
        name,
        signature,
        mask,
        name,
        name,
        name,
        name,
        name,
        name);
    ::fclose(out);
  }
}

#define IDEF(n, m, s, x) typedef allegrex_instruction_template_s< s, m > allegrex_instruction_##n##_s;
#include "emulator/allegrex/allegrex.def"
#undef IDEF
#define IDEF(n, m, s, x) char const *allegrex_instruction_template_s< s, m >::opcode_name() { return #n; }
#include "emulator/allegrex/allegrex.def"
#undef IDEF

void create_instructions_directory()
{
  FILE *out = ::fopen("emulator/allegrex/instructions.h", "w");
  if (out)
  {
    ::fclose(out);
#define IDEF(n, m, s, x) create_instructions_file("emulator/allegrex/instructions.h", #n);
#include "emulator/allegrex/allegrex.def"
#undef IDEF
#define IDEF(n, m, s, x) create_instruction_file("emulator/allegrex/instructions/" #n ".h", #n, s, m);
#include "emulator/allegrex/allegrex.def"
#undef IDEF
  }
}

#endif

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

#if 0
  if (!QSystemTrayIcon::isSystemTrayAvailable())
  {
    QMessageBox::critical
    (
        0,
        QObject::tr("Systray"),
        QObject::tr("There is no system tray on this system.")
    );
    return 1;
  }

  QApplication::setQuitOnLastWindowClosed(false);
#endif

#if 0
  create_instructions_directory();

  QPspe4all w;

  w.show();

#else
  if (true/*emulator.check_integrity()*/)
  {
    QPspe4all w;

    w.show();

    psp::memw(0x00010000) = 0xDEADBEEF;
    psp::memw(0x04000000) = 0xDEADC0DE;
    psp::memw(0x08000000) = 0xE117C0DE;

    QStringList list;

#define IDEF(n, m, s, x) list.append(QString("%1/%2 : %3").arg(uint(s), 8, 16, QChar('0')).arg(uint(m), 8, 16, QChar('0')).arg(allegrex::decode_instruction(s)->opcode_name()));
#include "emulator/allegrex/allegrex.def"
#undef IDEF

    QListWidget l;
    l.setFont(QFont("Terminal"));
    l.insertItems(0, list);
    l.show();

    return a.exec();
  }
#endif
  return a.exec();

  return 1;
}
