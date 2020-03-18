#ifndef SOFTKEYBOARD_H
#define SOFTKEYBOARD_H

#include <QDialog>
#include <QMainWindow>
#include <QKeyEvent>

namespace Ui {
class Softkeyboard;
}

class Softkeyboard : public QDialog
{
    Q_OBJECT

public:
    explicit Softkeyboard(QWidget *parent = 0);
    ~Softkeyboard();

private slots:
    void on_bt_q_clicked();

    void on_bt_w_clicked();

    void on_bt_e_clicked();

    void on_bt_r_clicked();

    void on_bt_t_clicked();

    void on_bt_y_clicked();

    void on_bt_u_clicked();

    void on_bt_i_clicked();

    void on_bt_o_clicked();

    void on_bt_p_clicked();

    void on_bt_a_clicked();

    void on_bt_s_clicked();

    void on_bt_d_clicked();

    void on_bt_f_clicked();

    void on_bt_g_clicked();

    void on_bt_h_clicked();

    void on_bt_j_clicked();

    void on_bt_k_clicked();

    void on_bt_l_clicked();

    void on_bt_z_clicked();

    void on_bt_x_clicked();

    void on_bt_c_clicked();

    void on_bt_v_clicked();

    void on_bt_b_clicked();

    void on_bt_n_clicked();

    void on_bt_m_clicked();

    void on_bt_delete_clicked();

    void on_bt_quit_softkeyboard_clicked();

private:
    Ui::Softkeyboard *ui;
};

#endif // SOFTKEYBOARD_H
