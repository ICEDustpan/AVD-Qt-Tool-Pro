#include "network.h"
#include "ui_network.h"
#include <QLabel>

Network::Network(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Network)


{
    ui->setupUi(this);

    //移除边框
    setWindowFlags(Qt::FramelessWindowHint);

    //bt_quit_notework 自定义按钮样式
    QIcon myicon_bt_quit_notework; //新建myicon_bt_quit_notework对象
    myicon_bt_quit_notework.addFile(tr(":/button/bt_quit.png")); //让myicon_bt_quit_notework对象指向想要的图标
    ui->bt_quit_notework->setIcon(myicon_bt_quit_notework); //给按钮添加图标
    ui->bt_quit_notework->setIconSize(QSize(30,30));//重置图标大小
    ui->bt_quit_notework->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_quit_notework->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影

    //执行linux ping 命令
    system("echo `ping -c 1 www.baidu.com` > /software/network.txt");

    QString displayString;

    //将/software/network.txt文件的内容赋值给file
    QFile file("/software/network.txt");

    //判断是否有file这个文件
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Failed to detection network"<<endl;
    }

    //读取file内容
    while(!file.atEnd())
    {
        //读取file文件传递给line
        QByteArray line = file.readLine();

        //将line转换成字符并传递给str
        QString str(line);

        //把str输出到qDebug
        qDebug()<< str;

        //把str里的内容连接到displayString
        displayString.append(str);
    };


       //清除控件 textEdit/label里面的内容
       //ui->textEdit->clear();
         ui->label->clear();

       //把displayString里面的内容显示在textEdit/label
       //ui->textEdit->setPlainText(displayString);
         ui->label->setText(displayString);

       //删除software/network.txt
       system("rm /software/network.txt");


}



Network::~Network()
{
    delete ui;
}

void Network::on_bt_quit_notework_clicked()
{
    //退出当前窗口
    QDialog::accept();
}
