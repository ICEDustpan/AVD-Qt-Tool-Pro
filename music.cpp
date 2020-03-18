#include "music.h"
#include "ui_music.h"
#include <QProcess>

Music::Music(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Music)
{
    ui->setupUi(this);

    //移除边框
    setWindowFlags(Qt::FramelessWindowHint);

    //bt_play 自定义按钮样式
    QIcon myicon_play; //新建myicon_screen对象
    myicon_play.addFile(tr(":/button/bt_play.png")); //让myicon_screen对象指向想要的图标
    ui->bt_play->setIcon(myicon_play); //给按钮添加图标
    ui->bt_play->setIconSize(QSize(120,120));//重置图标大小
    ui->bt_play->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_play->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影

    //bt_stop 自定义按钮样式
    QIcon myicon_stop; //新建myicon_screen对象
    myicon_stop.addFile(tr(":/button/bt_stop.png")); //让myicon_screen对象指向想要的图标
    ui->bt_stop->setIcon(myicon_stop); //给按钮添加图标
    ui->bt_stop->setIconSize(QSize(120,120));//重置图标大小
    ui->bt_stop->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_stop->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影


    //bt_quit_music 自定义按钮样式
    QIcon myicon_bt_music_music; //新建myicon_bt_quit_notework对象
    myicon_bt_music_music.addFile(tr(":/button/bt_quit.png")); //让myicon_bt_quit_notework对象指向想要的图标
    ui->bt_quit_music->setIcon(myicon_bt_music_music); //给按钮添加图标
    ui->bt_quit_music->setIconSize(QSize(30,30));//重置图标大小
    ui->bt_quit_music->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_quit_music->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影


}

Music::~Music()
{
    delete ui;
}


//stop music.mp3
void Music::on_bt_stop_clicked()
{
    QProcess *process = new QProcess();
    process->start("killall mplayer");
}

void Music::on_bt_quit_music_clicked()
{
    //退出当前窗口
    QDialog::accept();
}

void Music::on_bt_play_clicked()
{
    QProcess *process = new QProcess();
    process->start("mplayer /music/music.mp3");
}
