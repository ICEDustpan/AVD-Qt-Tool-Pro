#ifndef NETWORK_H
#define NETWORK_H

#include <QDialog>
#include <qdebug.h>
#include <QMainWindow>
#include <QDebug>
#include <QFile>

#include <QDialog>

namespace Ui {
class Network;
}

class Network : public QDialog
{
    Q_OBJECT

public:
    explicit Network(QWidget *parent = 0);
    ~Network();

private slots:
    void on_bt_quit_notework_clicked();

private:
    Ui::Network *ui;
};

#endif // NETWORK_H
