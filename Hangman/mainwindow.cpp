#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(this->geometry().width(),this->geometry().height());

    ui->chooseWord->setEchoMode(QLineEdit::Password);

    ui->A->setVisible(false);
    ui->B->setVisible(false);
    ui->C->setVisible(false);
    ui->D->setVisible(false);
    ui->E->setVisible(false);
    ui->F->setVisible(false);
    ui->FX->setVisible(false);
    ui->FX2->setVisible(false);
    ui->Ground->setVisible(false);
    ui->Lives->setVisible(false);
    ui->Heart->setVisible(false);
    ui->wordDisplay->setVisible(false);

    ToggleAllKeys(0);

    ui->Lives->setText(QString::number(lives));

    for (int i=0; i < 26; i++)
        disabled[i] = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_viewHiddenWord_pressed()
{
    ui->chooseWord->setEchoMode(QLineEdit::Normal);
}

void MainWindow::on_viewHiddenWord_released()
{
    ui->chooseWord->setEchoMode(QLineEdit::Password);
}

void MainWindow::on_startGame_clicked()
{
    word = ui->chooseWord->text();

    for (int i=0; i < word.length(); i++){ //Validation
        if(!((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z'))){ //not in alphabet
            ui->error->setText("Invalid character found in word.");
            return;
        }
    }

    if (word.length() < 3){
        ui->error->setText("Word is too short (Min 3 letters).");
        return;
    }
    if (word.length() > 11){
        ui->error->setText("Word is too long (Max 11 letters).");
        return;
    }

    ui->error->setText("");
    ui->error->setVisible(false);

    ui->wordDisplay->setText("");
    for (int i=0; i < word.length(); i++){
        ui->wordDisplay->setText(ui->wordDisplay->text() + "_");
    }

    ui->chooseWord->setVisible(false);
    ui->startGame->setVisible(false);
    ui->viewHiddenWord->setVisible(false);

    ui->Ground->setVisible(true);
    ToggleAllKeys(1);
}

void MainWindow::LoseLife(){
    lives--;
    ui->Lives->setText(QString::number(lives));
    switch (incorrectAttempts){
    case 0:
        ui->A->setVisible(true);
        break;
    case 1:
        ui->B->setVisible(true);
        break;
    case 2:
        ui->C->setVisible(true);
        break;
    case 3:
        ui->D->setVisible(true);
        break;
    case 4:
        ui->E->setVisible(true);
        break;
    case 5:
        ui->F->setVisible(true);
        ui->FX->setVisible(true);
    case 6:
        ui->FX2->setVisible(true);
    }
    incorrectAttempts++;

    if (lives == 0){
        WinOrLossCondition(0); //Call loss condition
    }
}

void MainWindow::WinOrLossCondition(int winorloss){
    if (winorloss == 0){ //Loss
        ui->wordDisplay->setText("You Lose! The word was " + word + ".");
    }
    else if (winorloss == 1){ //Win
        ui->wordDisplay->setText("You Win! The word was " + word + ".");


    }
    for (int i=0; i < 26; i++){
        disabled[i] = true; //Disable all buttons
    }
}

void MainWindow::CheckForWin(){
    if (ui->wordDisplay->text() == word)
        WinOrLossCondition(1);
}

bool MainWindow::checkLetter(char c){
    bool found = false;
    for (int i=0; i < word.length(); i++){
        if (word[i] == c){
            found = true;
            qDebug() << "found letter";
            QString s = ui->wordDisplay->text();
            s[i] = word[i];
            ui->wordDisplay->setText(s);
        }

    }

    if (found){
        return true;
    }
    else{
        LoseLife();
        return false;
    }

}

void MainWindow::ToggleAllKeys(bool s){
    ui->A_2->setVisible(s);
    ui->B_2->setVisible(s);
    ui->C_2->setVisible(s);
    ui->D_2->setVisible(s);
    ui->E_2->setVisible(s);
    ui->F_2->setVisible(s);
    ui->G->setVisible(s);
    ui->H->setVisible(s);
    ui->I->setVisible(s);
    ui->J->setVisible(s);
    ui->K->setVisible(s);
    ui->L->setVisible(s);
    ui->M->setVisible(s);
    ui->N->setVisible(s);
    ui->O->setVisible(s);
    ui->P->setVisible(s);
    ui->Q->setVisible(s);
    ui->R->setVisible(s);
    ui->S->setVisible(s);
    ui->T->setVisible(s);
    ui->U->setVisible(s);
    ui->V->setVisible(s);
    ui->W->setVisible(s);
    ui->X->setVisible(s);
    ui->Y->setVisible(s);
    ui->Z->setVisible(s);

    ui->Lives->setVisible(s);
    ui->Ground->setVisible(s);
    ui->Heart->setVisible(s);
    ui->wordDisplay->setVisible(s);
    ui->Restart->setVisible(s);
}

void MainWindow::ResetColors(){
    ui->A_2->setStyleSheet("");
    ui->B_2->setStyleSheet("");
    ui->C_2->setStyleSheet("");
    ui->D_2->setStyleSheet("");
    ui->E_2->setStyleSheet("");
    ui->F_2->setStyleSheet("");
    ui->G->setStyleSheet("");
    ui->H->setStyleSheet("");
    ui->I->setStyleSheet("");
    ui->J->setStyleSheet("");
    ui->K->setStyleSheet("");
    ui->L->setStyleSheet("");
    ui->M->setStyleSheet("");
    ui->N->setStyleSheet("");
    ui->O->setStyleSheet("");
    ui->P->setStyleSheet("");
    ui->Q->setStyleSheet("");
    ui->R->setStyleSheet("");
    ui->S->setStyleSheet("");
    ui->T->setStyleSheet("");
    ui->U->setStyleSheet("");
    ui->V->setStyleSheet("");
    ui->W->setStyleSheet("");
    ui->X->setStyleSheet("");
    ui->Y->setStyleSheet("");
    ui->Z->setStyleSheet("");
}

void MainWindow::Restart(){
    ToggleAllKeys(0);
    ui->chooseWord->setVisible(true);
    ui->startGame->setVisible(true);
    ui->viewHiddenWord->setVisible(true);
    ui->error->setVisible(true);
    ui->error->setText("");

    ui->A->setVisible(false);
    ui->B->setVisible(false);
    ui->C->setVisible(false);
    ui->D->setVisible(false);
    ui->E->setVisible(false);
    ui->F->setVisible(false);
    ui->FX->setVisible(false);
    ui->FX2->setVisible(false);

    for (int i=0; i < 26; i++){
        disabled[i] = false;
    }

    ResetColors();

    word = "";
    lives = defaultLives;
    incorrectAttempts = 0;

    ui->Lives->setText(QString::number(lives));
    ui->chooseWord->setText("");
}

void MainWindow::on_A_2_clicked()
{
    if (disabled[0]) {return;}

    if (!checkLetter('a')){
        ui->A_2->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[0] = true;
    }
    else{
        ui->A_2->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_B_2_clicked()
{
    if (disabled[1]) {return;}

    if (!checkLetter('b')){
        ui->B_2->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[1] = true;
    }
    else{
        ui->B_2->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_C_2_clicked()
{
    if (disabled[2]) {return;}

    if (!checkLetter('c')){
        ui->C_2->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[2] = true;
    }
    else{
        ui->C_2->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_D_2_clicked()
{
    if (disabled[3]) {return;}

    if (!checkLetter('d')){
        ui->D_2->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[3] = true;
    }
    else{
        ui->D_2->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_E_2_clicked()
{
    if (disabled[4]) {return;}

    if (!checkLetter('e')){
        ui->E_2->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[4] = true;
    }
    else{
        ui->E_2->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_F_2_clicked()
{
    if (disabled[5]) {return;}

    if (!checkLetter('f')){
        ui->F_2->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[5] = true;
    }
    else{
        ui->F->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_G_clicked()
{
    if (disabled[6]) {return;}

    if (!checkLetter('g')){
        ui->G->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[6] = true;
    }
    else{
        ui->G->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_H_clicked()
{
    if (disabled[7]) {return;}

    if (!checkLetter('h')){
        ui->H->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[7] = true;
    }
    else{
        ui->H->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_I_clicked()
{
    if (disabled[8]) {return;}

    if (!checkLetter('i')){
        ui->I->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[8] = true;
    }
    else{
        ui->I->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_J_clicked()
{
    if (disabled[9]) {return;}

    if (!checkLetter('j')){
        ui->J->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[9] = true;
    }
    else{
        ui->J->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_K_clicked()
{
    if (disabled[10]) {return;}

    if (!checkLetter('k')){
        ui->K->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[10] = true;
    }
    else{
        ui->K->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_L_clicked()
{
    if (disabled[11]) {return;}

    if (!checkLetter('l')){
        ui->L->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[11] = true;
    }
    else{
        ui->L->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_M_clicked()
{
    if (disabled[12]) {return;}

    if (!checkLetter('m')){
        ui->M->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[12] = true;
    }
    else{
        ui->M->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_N_clicked()
{
    if (disabled[13]) {return;}

    if (!checkLetter('n')){
        ui->N->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[13] = true;
    }
    else{
        ui->N->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_O_clicked()
{
    if (disabled[14]) {return;}

    if (!checkLetter('o')){
        ui->O->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[14] = true;
    }
    else{
        ui->O->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_P_clicked()
{
    if (disabled[15]) {return;}

    if (!checkLetter('p')){
        ui->P->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[15] = true;
    }
    else{
        ui->P->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_Q_clicked()
{
    if (disabled[16]) {return;}

    if (!checkLetter('q')){
        ui->Q->setStyleSheet("background-color: rgb(191, 44, 44);");

        disabled[16] = true;
    }
    else{
        ui->Q->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_R_clicked()
{
    if (disabled[17]) {return;}

    if (!checkLetter('r')){
        ui->R->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[17] = true;
    }
    else{
        ui->R->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_S_clicked()
{
    if (disabled[18]) {return;}

    if (!checkLetter('s')){
        ui->S->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[18] = true;
    }
    else{
        ui->S->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_T_clicked()
{
    if (disabled[19]) {return;}

    if (!checkLetter('t')){
        ui->T->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[19] = true;
    }
    else{
        ui->T->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_U_clicked()
{
    if (disabled[20]) {return;}

    if (!checkLetter('u')){
        ui->U->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[20] = true;
    }
    else{
        ui->U->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_V_clicked()
{
    if (disabled[21]) {return;}

    if (!checkLetter('v')){
        ui->V->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[21] = true;
    }
    else{
        ui->V->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_W_clicked()
{
    if (disabled[22]) {return;}

    if (!checkLetter('w')){
        ui->W->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[22] = true;
    }
    else{
        ui->W->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_X_clicked()
{
    if (disabled[23]) {return;}

    if (!checkLetter('x')){
        ui->X->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[23] = true;
    }
    else{
        ui->X->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_Y_clicked()
{
    if (disabled[24]) {return;}

    if (!checkLetter('y')){
        ui->Y->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[24] = true;
    }
    else{
        ui->Y->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_Z_clicked()
{
    if (disabled[25]) {return;}

    if (!checkLetter('z')){
        ui->Z->setStyleSheet("background-color: rgb(191, 44, 44);");
        disabled[25] = true;
    }
    else{
        ui->Z->setStyleSheet("background-color: rgb(40, 199, 40);");
    }
    CheckForWin();
}

void MainWindow::on_Restart_clicked()
{
    Restart();
}
