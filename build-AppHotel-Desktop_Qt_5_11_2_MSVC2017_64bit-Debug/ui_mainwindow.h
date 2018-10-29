/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblNome;
    QPlainTextEdit *txtLogin;
    QPlainTextEdit *txtSenha;
    QLabel *lblCpf;
    QPushButton *btnEntrar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(339, 230);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblNome = new QLabel(centralWidget);
        lblNome->setObjectName(QStringLiteral("lblNome"));
        lblNome->setGeometry(QRect(150, 30, 47, 13));
        txtLogin = new QPlainTextEdit(centralWidget);
        txtLogin->setObjectName(QStringLiteral("txtLogin"));
        txtLogin->setGeometry(QRect(30, 50, 291, 24));
        txtSenha = new QPlainTextEdit(centralWidget);
        txtSenha->setObjectName(QStringLiteral("txtSenha"));
        txtSenha->setGeometry(QRect(30, 100, 291, 24));
        lblCpf = new QLabel(centralWidget);
        lblCpf->setObjectName(QStringLiteral("lblCpf"));
        lblCpf->setGeometry(QRect(150, 80, 31, 16));
        btnEntrar = new QPushButton(centralWidget);
        btnEntrar->setObjectName(QStringLiteral("btnEntrar"));
        btnEntrar->setGeometry(QRect(130, 160, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        lblNome->setText(QApplication::translate("MainWindow", "Login", nullptr));
        lblCpf->setText(QApplication::translate("MainWindow", "Senha", nullptr));
        btnEntrar->setText(QApplication::translate("MainWindow", "Entrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
