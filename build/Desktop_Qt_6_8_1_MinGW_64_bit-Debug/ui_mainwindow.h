/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *chooseWord;
    QPushButton *startGame;
    QPushButton *viewHiddenWord;
    QLabel *wordDisplay;
    QLabel *Ground;
    QLabel *A;
    QLabel *B;
    QLabel *C;
    QLabel *D;
    QLabel *E;
    QLabel *F;
    QLabel *FX;
    QLabel *FX2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Q;
    QPushButton *T;
    QPushButton *W;
    QPushButton *D_2;
    QPushButton *Y;
    QPushButton *E_2;
    QPushButton *S;
    QPushButton *V;
    QPushButton *O;
    QPushButton *G;
    QPushButton *C_2;
    QPushButton *A_2;
    QPushButton *U;
    QPushButton *X;
    QPushButton *B_2;
    QPushButton *I;
    QPushButton *F_2;
    QPushButton *R;
    QPushButton *H;
    QPushButton *Z;
    QPushButton *P;
    QPushButton *J;
    QPushButton *K;
    QPushButton *L;
    QPushButton *N;
    QPushButton *M;
    QLabel *Lives;
    QLabel *Heart;
    QPushButton *Restart;
    QLabel *error;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(650, 707);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QFont font;
        font.setBold(false);
        centralwidget->setFont(font);
        chooseWord = new QLineEdit(centralwidget);
        chooseWord->setObjectName("chooseWord");
        chooseWord->setEnabled(true);
        chooseWord->setGeometry(QRect(200, 180, 261, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(true);
        chooseWord->setFont(font1);
        chooseWord->setAlignment(Qt::AlignmentFlag::AlignCenter);
        startGame = new QPushButton(centralwidget);
        startGame->setObjectName("startGame");
        startGame->setEnabled(true);
        startGame->setGeometry(QRect(200, 230, 261, 23));
        viewHiddenWord = new QPushButton(centralwidget);
        viewHiddenWord->setObjectName("viewHiddenWord");
        viewHiddenWord->setEnabled(true);
        viewHiddenWord->setGeometry(QRect(430, 190, 21, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/eye.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        viewHiddenWord->setIcon(icon);
        viewHiddenWord->setFlat(true);
        wordDisplay = new QLabel(centralwidget);
        wordDisplay->setObjectName("wordDisplay");
        wordDisplay->setGeometry(QRect(10, 550, 621, 71));
        QFont font2;
        font2.setPointSize(31);
        font2.setBold(true);
        wordDisplay->setFont(font2);
        wordDisplay->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Ground = new QLabel(centralwidget);
        Ground->setObjectName("Ground");
        Ground->setGeometry(QRect(0, -120, 650, 650));
        Ground->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Ground.png")));
        Ground->setScaledContents(true);
        A = new QLabel(centralwidget);
        A->setObjectName("A");
        A->setGeometry(QRect(10, -130, 650, 650));
        A->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/1.png")));
        A->setScaledContents(true);
        B = new QLabel(centralwidget);
        B->setObjectName("B");
        B->setGeometry(QRect(10, -90, 650, 650));
        B->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/2.png")));
        B->setScaledContents(true);
        C = new QLabel(centralwidget);
        C->setObjectName("C");
        C->setGeometry(QRect(10, -50, 650, 471));
        C->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/3.png")));
        C->setScaledContents(true);
        D = new QLabel(centralwidget);
        D->setObjectName("D");
        D->setGeometry(QRect(10, -110, 650, 650));
        D->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/4.png")));
        D->setScaledContents(true);
        E = new QLabel(centralwidget);
        E->setObjectName("E");
        E->setGeometry(QRect(10, -110, 650, 650));
        E->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/5.png")));
        E->setScaledContents(true);
        F = new QLabel(centralwidget);
        F->setObjectName("F");
        F->setGeometry(QRect(10, -110, 650, 650));
        F->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/6.png")));
        F->setScaledContents(true);
        FX = new QLabel(centralwidget);
        FX->setObjectName("FX");
        FX->setGeometry(QRect(10, -120, 650, 631));
        FX->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/7.png")));
        FX->setScaledContents(true);
        FX2 = new QLabel(centralwidget);
        FX2->setObjectName("FX2");
        FX2->setGeometry(QRect(-10, -120, 650, 650));
        FX2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/8.png")));
        FX2->setScaledContents(true);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 420, 611, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Q = new QPushButton(gridLayoutWidget);
        Q->setObjectName("Q");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Q->sizePolicy().hasHeightForWidth());
        Q->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Q, 0, 0, 1, 1);

        T = new QPushButton(gridLayoutWidget);
        T->setObjectName("T");
        sizePolicy.setHeightForWidth(T->sizePolicy().hasHeightForWidth());
        T->setSizePolicy(sizePolicy);

        gridLayout->addWidget(T, 0, 4, 1, 1);

        W = new QPushButton(gridLayoutWidget);
        W->setObjectName("W");
        sizePolicy.setHeightForWidth(W->sizePolicy().hasHeightForWidth());
        W->setSizePolicy(sizePolicy);

        gridLayout->addWidget(W, 0, 1, 1, 1);

        D_2 = new QPushButton(gridLayoutWidget);
        D_2->setObjectName("D_2");
        sizePolicy.setHeightForWidth(D_2->sizePolicy().hasHeightForWidth());
        D_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(D_2, 1, 3, 1, 1);

        Y = new QPushButton(gridLayoutWidget);
        Y->setObjectName("Y");
        sizePolicy.setHeightForWidth(Y->sizePolicy().hasHeightForWidth());
        Y->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Y, 0, 5, 1, 1);

        E_2 = new QPushButton(gridLayoutWidget);
        E_2->setObjectName("E_2");
        sizePolicy.setHeightForWidth(E_2->sizePolicy().hasHeightForWidth());
        E_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(E_2, 0, 2, 1, 1);

        S = new QPushButton(gridLayoutWidget);
        S->setObjectName("S");
        sizePolicy.setHeightForWidth(S->sizePolicy().hasHeightForWidth());
        S->setSizePolicy(sizePolicy);

        gridLayout->addWidget(S, 1, 2, 1, 1);

        V = new QPushButton(gridLayoutWidget);
        V->setObjectName("V");
        sizePolicy.setHeightForWidth(V->sizePolicy().hasHeightForWidth());
        V->setSizePolicy(sizePolicy);

        gridLayout->addWidget(V, 2, 5, 1, 1);

        O = new QPushButton(gridLayoutWidget);
        O->setObjectName("O");
        sizePolicy.setHeightForWidth(O->sizePolicy().hasHeightForWidth());
        O->setSizePolicy(sizePolicy);

        gridLayout->addWidget(O, 0, 8, 1, 1);

        G = new QPushButton(gridLayoutWidget);
        G->setObjectName("G");
        sizePolicy.setHeightForWidth(G->sizePolicy().hasHeightForWidth());
        G->setSizePolicy(sizePolicy);

        gridLayout->addWidget(G, 1, 5, 1, 1);

        C_2 = new QPushButton(gridLayoutWidget);
        C_2->setObjectName("C_2");
        sizePolicy.setHeightForWidth(C_2->sizePolicy().hasHeightForWidth());
        C_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(C_2, 2, 4, 1, 1);

        A_2 = new QPushButton(gridLayoutWidget);
        A_2->setObjectName("A_2");
        sizePolicy.setHeightForWidth(A_2->sizePolicy().hasHeightForWidth());
        A_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(A_2, 1, 1, 1, 1);

        U = new QPushButton(gridLayoutWidget);
        U->setObjectName("U");
        sizePolicy.setHeightForWidth(U->sizePolicy().hasHeightForWidth());
        U->setSizePolicy(sizePolicy);

        gridLayout->addWidget(U, 0, 6, 1, 1);

        X = new QPushButton(gridLayoutWidget);
        X->setObjectName("X");
        sizePolicy.setHeightForWidth(X->sizePolicy().hasHeightForWidth());
        X->setSizePolicy(sizePolicy);

        gridLayout->addWidget(X, 2, 3, 1, 1);

        B_2 = new QPushButton(gridLayoutWidget);
        B_2->setObjectName("B_2");
        sizePolicy.setHeightForWidth(B_2->sizePolicy().hasHeightForWidth());
        B_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(B_2, 2, 6, 1, 1);

        I = new QPushButton(gridLayoutWidget);
        I->setObjectName("I");
        sizePolicy.setHeightForWidth(I->sizePolicy().hasHeightForWidth());
        I->setSizePolicy(sizePolicy);

        gridLayout->addWidget(I, 0, 7, 1, 1);

        F_2 = new QPushButton(gridLayoutWidget);
        F_2->setObjectName("F_2");
        sizePolicy.setHeightForWidth(F_2->sizePolicy().hasHeightForWidth());
        F_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(F_2, 1, 4, 1, 1);

        R = new QPushButton(gridLayoutWidget);
        R->setObjectName("R");
        sizePolicy.setHeightForWidth(R->sizePolicy().hasHeightForWidth());
        R->setSizePolicy(sizePolicy);

        gridLayout->addWidget(R, 0, 3, 1, 1);

        H = new QPushButton(gridLayoutWidget);
        H->setObjectName("H");
        sizePolicy.setHeightForWidth(H->sizePolicy().hasHeightForWidth());
        H->setSizePolicy(sizePolicy);

        gridLayout->addWidget(H, 1, 6, 1, 1);

        Z = new QPushButton(gridLayoutWidget);
        Z->setObjectName("Z");
        sizePolicy.setHeightForWidth(Z->sizePolicy().hasHeightForWidth());
        Z->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Z, 2, 2, 1, 1);

        P = new QPushButton(gridLayoutWidget);
        P->setObjectName("P");
        sizePolicy.setHeightForWidth(P->sizePolicy().hasHeightForWidth());
        P->setSizePolicy(sizePolicy);

        gridLayout->addWidget(P, 0, 9, 1, 1);

        J = new QPushButton(gridLayoutWidget);
        J->setObjectName("J");
        sizePolicy.setHeightForWidth(J->sizePolicy().hasHeightForWidth());
        J->setSizePolicy(sizePolicy);

        gridLayout->addWidget(J, 1, 7, 1, 1);

        K = new QPushButton(gridLayoutWidget);
        K->setObjectName("K");
        sizePolicy.setHeightForWidth(K->sizePolicy().hasHeightForWidth());
        K->setSizePolicy(sizePolicy);

        gridLayout->addWidget(K, 1, 8, 1, 1);

        L = new QPushButton(gridLayoutWidget);
        L->setObjectName("L");
        sizePolicy.setHeightForWidth(L->sizePolicy().hasHeightForWidth());
        L->setSizePolicy(sizePolicy);

        gridLayout->addWidget(L, 1, 9, 1, 1);

        N = new QPushButton(gridLayoutWidget);
        N->setObjectName("N");
        sizePolicy.setHeightForWidth(N->sizePolicy().hasHeightForWidth());
        N->setSizePolicy(sizePolicy);

        gridLayout->addWidget(N, 2, 7, 1, 1);

        M = new QPushButton(gridLayoutWidget);
        M->setObjectName("M");
        sizePolicy.setHeightForWidth(M->sizePolicy().hasHeightForWidth());
        M->setSizePolicy(sizePolicy);

        gridLayout->addWidget(M, 2, 8, 1, 1);

        Lives = new QLabel(centralwidget);
        Lives->setObjectName("Lives");
        Lives->setGeometry(QRect(590, 10, 51, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("MV Boli")});
        font3.setPointSize(24);
        font3.setBold(false);
        Lives->setFont(font3);
        Lives->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Heart = new QLabel(centralwidget);
        Heart->setObjectName("Heart");
        Heart->setGeometry(QRect(540, 0, 91, 81));
        Heart->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/heart.png")));
        Heart->setScaledContents(true);
        Heart->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Restart = new QPushButton(centralwidget);
        Restart->setObjectName("Restart");
        Restart->setGeometry(QRect(10, 630, 131, 31));
        error = new QLabel(centralwidget);
        error->setObjectName("error");
        error->setGeometry(QRect(200, 270, 261, 20));
        error->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        FX2->raise();
        A->raise();
        D->raise();
        FX->raise();
        B->raise();
        C->raise();
        E->raise();
        F->raise();
        Ground->raise();
        chooseWord->raise();
        viewHiddenWord->raise();
        startGame->raise();
        wordDisplay->raise();
        gridLayoutWidget->raise();
        Lives->raise();
        Heart->raise();
        Restart->raise();
        error->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 650, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hangman (By JT)", nullptr));
        chooseWord->setText(QString());
        chooseWord->setPlaceholderText(QCoreApplication::translate("MainWindow", "CHOOSE YOUR WORD", nullptr));
        startGame->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        viewHiddenWord->setText(QString());
        wordDisplay->setText(QCoreApplication::translate("MainWindow", "_ _ _ _ _", nullptr));
        Ground->setText(QString());
        A->setText(QString());
        B->setText(QString());
        C->setText(QString());
        D->setText(QString());
        E->setText(QString());
        F->setText(QString());
        FX->setText(QString());
        FX2->setText(QString());
        Q->setText(QCoreApplication::translate("MainWindow", "Q", nullptr));
        T->setText(QCoreApplication::translate("MainWindow", "T", nullptr));
        W->setText(QCoreApplication::translate("MainWindow", "W", nullptr));
        D_2->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        Y->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        E_2->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        S->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        V->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        O->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        G->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        C_2->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        A_2->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        U->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        X->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        B_2->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        I->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        F_2->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        R->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        H->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        Z->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        P->setText(QCoreApplication::translate("MainWindow", "P", nullptr));
        J->setText(QCoreApplication::translate("MainWindow", "J", nullptr));
        K->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        L->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        N->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        M->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        Lives->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Heart->setText(QString());
        Restart->setText(QCoreApplication::translate("MainWindow", "START OVER", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
