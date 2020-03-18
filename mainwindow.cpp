#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <screen.h>
#include <network.h>
#include <music.h>
#include <softkeyboard.h>
#include <QToolButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置图片为主窗口背景
    QPixmap pixmap = QPixmap(":background/main.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);

    //bt_screen 自定义按钮样式
    QIcon myicon_screen; //新建myicon_screen对象
    myicon_screen.addFile(tr(":/button/bt_screen.png")); //让myicon_screen对象指向想要的图标
    ui->bt_screen->setIcon(myicon_screen); //给按钮添加图标
    ui->bt_screen->setIconSize(QSize(90,90));//重置图标大小
    ui->bt_screen->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_screen->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影


    //bt_music 自定义按钮样式
    QIcon myicon_music; //新建myicon_music对象
    myicon_music.addFile(tr(":/button/bt_music.png")); //让myicon_music对象指向想要的图标
    ui->bt_music->setIcon(myicon_music); //给按钮添加图标
    ui->bt_music->setIconSize(QSize(90,90));//重置图标大小
    ui->bt_music->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_music->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影


    //bt_notework 自定义按钮样式
    QIcon myicon_notework; //新建myicon_notework对象
    myicon_notework.addFile(tr(":/button/bt_notework.png")); //让myicon_notework对象指向想要的图标
    ui->bt_network->setIcon(myicon_notework); //给按钮添加图标
    ui->bt_network->setIconSize(QSize(90,90));//重置图标大小
    ui->bt_network->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_network->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影


    //bt_softkeyboard 自定义按钮样式
    QIcon bt_softkeyboard; //新建myicon_notework对象
    bt_softkeyboard.addFile(tr(":/button/bt_softkeyboard.png")); //让bt_softkeyboard对象指向想要的图标
    ui->bt_softkeyboard->setIcon(bt_softkeyboard); //给按钮添加图标
    ui->bt_softkeyboard->setIconSize(QSize(90,90));//重置图标大小
    ui->bt_softkeyboard->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_softkeyboard->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影











    //移除边框
    setWindowFlags(Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//跳转到 screen ui 界面
void MainWindow::on_bt_screen_clicked()
{
    Screen d;
    d.exec();
}

//通过调用linux命令播放音乐
void MainWindow::on_bt_music_clicked()
{
    Music d;
    d.exec();
}


//跳转到 network ui 界面
void MainWindow::on_bt_network_clicked()
{
    Network d;
    d.exec();
}


//跳转到Soft keyboard ui 界面
void MainWindow::on_bt_softkeyboard_clicked()
{
    Softkeyboard d;
    d.exec();
}


