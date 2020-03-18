#ifndef SCREEN_H
#define SCREEN_H

#include <QDialog>

namespace Ui {
class Screen;
}

class Screen : public QDialog
{
    Q_OBJECT

public:
    explicit Screen(QWidget *parent = 0);
    ~Screen();

private slots:
    void on_bt_quit_screen_clicked();

private:
    Ui::Screen *ui;
};

#endif // SCREEN_H
