#ifndef QPSSPE4ALL_H
#define QPSSPE4ALL_H

#include <QMainWindow>
#include <QSystemTrayIcon>

#include "ui_qpspe4all.h"

class QPspe4all : public QMainWindow
{
    Q_OBJECT

  public:
    QPspe4all(QWidget *parent = 0);
    ~QPspe4all();

    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;

    void log(QString const &s);

    static QPspe4all *that;

  private:
    Ui::QPspe4all ui;
};

#endif // QPSSPE4ALL_H
