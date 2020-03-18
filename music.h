#ifndef MUSIC_H
#define MUSIC_H

#include <QDialog>

namespace Ui {
class Music;
}

class Music : public QDialog
{
    Q_OBJECT

public:
    explicit Music(QWidget *parent = 0);
    ~Music();

private slots:
    void on_bt_paly_clicked();

    void on_bt_stop_clicked();

    void on_bt_quit_music_clicked();

    void on_bt_play_clicked();

private:
    Ui::Music *ui;
};

#endif // MUSIC_H
