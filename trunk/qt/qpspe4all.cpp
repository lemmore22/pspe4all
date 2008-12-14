#include "qpspe4all.h"
#include "../emulator/emulator.h"

QPspe4all *QPspe4all::that = 0;

QPspe4all::QPspe4all(QWidget *parent)
: QMainWindow(parent)
{
  that = this;

  ui.setupUi(this);

  emulator.initialize();
}

QPspe4all::~QPspe4all()
{
  emulator.finalize();
}

void QPspe4all::log(QString const &line)
{
  if (ui.plainTextEdit_log) ui.plainTextEdit_log->appendHtml(line);
}
