#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_viewHiddenWord_pressed();

    void on_viewHiddenWord_released();

    void on_startGame_clicked();

    void on_A_2_clicked();
    void on_B_2_clicked();
    void on_C_2_clicked();
    void on_D_2_clicked();
    void on_E_2_clicked();
    void on_F_2_clicked();
    void on_G_clicked();
    void on_H_clicked();
    void on_I_clicked();
    void on_J_clicked();
    void on_K_clicked();
    void on_L_clicked();
    void on_M_clicked();
    void on_N_clicked();
    void on_O_clicked();
    void on_P_clicked();
    void on_Q_clicked();
    void on_R_clicked();
    void on_S_clicked();
    void on_T_clicked();
    void on_U_clicked();
    void on_V_clicked();
    void on_W_clicked();
    void on_X_clicked();
    void on_Y_clicked();
    void on_Z_clicked();

    void on_Restart_clicked();

private:
    Ui::MainWindow *ui;

    QString word;
    const int defaultLives = 6;
    int lives = defaultLives;
    int incorrectAttempts = 0;

    bool disabled[26];

    bool checkLetter(char c);
    void LoseLife();
    void WinOrLossCondition(int winorloss);
    void CheckForWin();
    void ToggleAllKeys(bool s);
    void Restart();
    void ResetColors();
};
#endif // MAINWINDOW_H
