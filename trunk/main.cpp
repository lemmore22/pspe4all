#include "qpspe4all.h"

#include <QtGui>
#include <QApplication>

#define BUILD_EMULATOR
#include "emulator/emulator.h"
#undef BUILD_EMULATOR

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
	if (emulator.check_integrity())
	{
		QPspe4All w;

		w.show();

		psp_n::memw(0x00010000) = 0xDEADBEEF;
		psp_n::memw(0x04000000) = 0xDEADC0DE;
		psp_n::memw(0x08000000) = 0xE117C0DE;

		QStringList list;

#define IDEF(n, m, s, x) list.append(QString("%1/%2 : %3").arg(uint(s), 8, 16, QChar('0')).arg(uint(m), 8, 16, QChar('0')).arg(decoder_s::instruction(s)->opcode_name()));
#include "emulator/allegrex/allegrex.def"
#undef IDEF

		QListWidget l;
		l.setFont(QFont("Terminal"));
		l.insertItems(0, list);
		l.show();

		return a.exec();
	}
#else
	return a.exec();
#endif

	return 1;
}
