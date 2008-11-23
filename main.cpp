#include "qt/qpspe4all.h"

#include <QtGui>
#include <QApplication>

#include "emulator/types.h"
#include "emulator/memory.h"
#include "emulator/emulator.h"
#include "emulator/processor.h"
#include "emulator/allegrex.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  a.setStyle("cleanlooks");

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
  allegrex::create_instructions_directory();
  allegrex::create_interpreter_directory();
  allegrex::create_disassembler_directory();

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
