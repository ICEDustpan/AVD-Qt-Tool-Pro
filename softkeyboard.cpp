#include "softkeyboard.h"
#include "ui_softkeyboard.h"

Softkeyboard::Softkeyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Softkeyboard)
{
    ui->setupUi(this);
    //移除边框
    setWindowFlags(Qt::FramelessWindowHint);

    //bt_quit_softkeyboard 自定义按钮样式
    QIcon myicon_bt_softkeyboard; //新建bt_quit_softkeyboard对象
    myicon_bt_softkeyboard.addFile(tr(":/button/bt_quit.png")); //让bt_quit_softkeyboard对象指向想要的图标
    ui->bt_quit_softkeyboard->setIcon(myicon_bt_softkeyboard); //给按钮添加图标
    ui->bt_quit_softkeyboard->setIconSize(QSize(30,30));//重置图标大小
    ui->bt_quit_softkeyboard->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->bt_quit_softkeyboard->setFocusPolicy(Qt::NoFocus); //除去原来按钮阴影
}

Softkeyboard::~Softkeyboard()
{
    delete ui;
}

//对应键盘输入符号
void Softkeyboard::on_bt_q_clicked()
{
    ui->textEdit->insertPlainText("q");
}

void Softkeyboard::on_bt_w_clicked()
{
    ui->textEdit->insertPlainText("w");
}

void Softkeyboard::on_bt_e_clicked()
{
    ui->textEdit->insertPlainText("e");
}

void Softkeyboard::on_bt_r_clicked()
{
    ui->textEdit->insertPlainText("r");
}

void Softkeyboard::on_bt_t_clicked()
{
    ui->textEdit->insertPlainText("t");
}

void Softkeyboard::on_bt_y_clicked()
{
    ui->textEdit->insertPlainText("y");
}

void Softkeyboard::on_bt_u_clicked()
{
    ui->textEdit->insertPlainText("u");
}

void Softkeyboard::on_bt_i_clicked()
{
    ui->textEdit->insertPlainText("i");
}

void Softkeyboard::on_bt_o_clicked()
{
    ui->textEdit->insertPlainText("o");
}

void Softkeyboard::on_bt_p_clicked()
{
    ui->textEdit->insertPlainText("p");
}

void Softkeyboard::on_bt_a_clicked()
{
    ui->textEdit->insertPlainText("a");
}

void Softkeyboard::on_bt_s_clicked()
{
    ui->textEdit->insertPlainText("s");
}

void Softkeyboard::on_bt_d_clicked()
{
    ui->textEdit->insertPlainText("d");
}

void Softkeyboard::on_bt_f_clicked()
{
    ui->textEdit->insertPlainText("f");
}

void Softkeyboard::on_bt_g_clicked()
{
    ui->textEdit->insertPlainText("g");
}

void Softkeyboard::on_bt_h_clicked()
{
    ui->textEdit->insertPlainText("h");
}

void Softkeyboard::on_bt_j_clicked()
{
    ui->textEdit->insertPlainText("j");
}

void Softkeyboard::on_bt_k_clicked()
{
    ui->textEdit->insertPlainText("k");
}

void Softkeyboard::on_bt_l_clicked()
{
    ui->textEdit->insertPlainText("l");
}

void Softkeyboard::on_bt_z_clicked()
{
    ui->textEdit->insertPlainText("z");
}

void Softkeyboard::on_bt_x_clicked()
{
    ui->textEdit->insertPlainText("x");
}

void Softkeyboard::on_bt_c_clicked()
{
    ui->textEdit->insertPlainText("c");
}

void Softkeyboard::on_bt_v_clicked()
{
    ui->textEdit->insertPlainText("v");
}

void Softkeyboard::on_bt_b_clicked()
{
    ui->textEdit->insertPlainText("b");
}

void Softkeyboard::on_bt_n_clicked()
{
    ui->textEdit->insertPlainText("n");
}

void Softkeyboard::on_bt_m_clicked()
{
    ui->textEdit->insertPlainText("m");
}

void Softkeyboard::on_bt_delete_clicked()
{
    //删除键
    QKeyEvent *event;
    event=new QKeyEvent(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier);//新建一个键盘事件
    ui->textEdit->setFocus();
    QApplication::sendEvent(focusWidget(),event);
}

void Softkeyboard::on_bt_quit_softkeyboard_clicked()
{
    //退出当前窗口
    QDialog::accept();
}
