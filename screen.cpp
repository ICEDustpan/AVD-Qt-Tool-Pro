#include "screen.h"
#include "ui_screen.h"
#include <QLabel>
#include <QMovie>



Screen::Screen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Screen)
{
    ui->setupUi(this);


    //移除边框
    setWindowFlags(Qt::FramelessWindowHint);

    //bt_quit_screen 自定义按钮样式
    QIcon myicon_bt_quit_screen; //新建bt_quit_screen对象
    myicon_bt_quit_screen.addFile(tr(":/button/bt_quit.png")); //让bt_quit_screen对象指向想要的图标
    ui->bt_quit_screen->setIcon(myicon_bt_quit_screen); //给按钮添加图标
    ui->bt_quit_screen->setIconSize(QSize(30,30));//重置图标大小
    ui->bt_quit_screen->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_quit_screen->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影

    //播放资源文件 gif 路径的sreen.gif
    QMovie *movie = new QMovie(":/gif/screen.gif");
    ui->label->setMovie(movie);
    movie->start();

}

Screen::~Screen()
{
    delete ui;
}


// 退出screen ui 界面
void Screen::on_bt_quit_screen_clicked()
{
    //退出当前窗口
    QDialog::accept();
}
