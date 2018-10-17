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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
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
    QPlainTextEdit *textEditNome;
    QPlainTextEdit *textEditCpf;
    QLabel *lblCpf;
    QLabel *lblTel;
    QPlainTextEdit *textEditTel;
    QLabel *lblDatanasci;
    QDateEdit *dateNasci;
    QDateTimeEdit *dateTimeChin;
    QDateTimeEdit *dateTimeChout;
    QLabel *lblChin;
    QLabel *lblChout;
    QPushButton *btnCadastrar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(339, 415);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblNome = new QLabel(centralWidget);
        lblNome->setObjectName(QStringLiteral("lblNome"));
        lblNome->setGeometry(QRect(30, 30, 47, 13));
        textEditNome = new QPlainTextEdit(centralWidget);
        textEditNome->setObjectName(QStringLiteral("textEditNome"));
        textEditNome->setGeometry(QRect(30, 50, 291, 24));
        textEditCpf = new QPlainTextEdit(centralWidget);
        textEditCpf->setObjectName(QStringLiteral("textEditCpf"));
        textEditCpf->setGeometry(QRect(30, 100, 291, 24));
        lblCpf = new QLabel(centralWidget);
        lblCpf->setObjectName(QStringLiteral("lblCpf"));
        lblCpf->setGeometry(QRect(30, 80, 31, 16));
        lblTel = new QLabel(centralWidget);
        lblTel->setObjectName(QStringLiteral("lblTel"));
        lblTel->setGeometry(QRect(30, 130, 47, 13));
        textEditTel = new QPlainTextEdit(centralWidget);
        textEditTel->setObjectName(QStringLiteral("textEditTel"));
        textEditTel->setGeometry(QRect(30, 150, 231, 24));
        lblDatanasci = new QLabel(centralWidget);
        lblDatanasci->setObjectName(QStringLiteral("lblDatanasci"));
        lblDatanasci->setGeometry(QRect(30, 180, 111, 16));
        dateNasci = new QDateEdit(centralWidget);
        dateNasci->setObjectName(QStringLiteral("dateNasci"));
        dateNasci->setGeometry(QRect(30, 200, 110, 22));
        dateTimeChin = new QDateTimeEdit(centralWidget);
        dateTimeChin->setObjectName(QStringLiteral("dateTimeChin"));
        dateTimeChin->setGeometry(QRect(30, 250, 194, 22));
        dateTimeChout = new QDateTimeEdit(centralWidget);
        dateTimeChout->setObjectName(QStringLiteral("dateTimeChout"));
        dateTimeChout->setGeometry(QRect(30, 310, 194, 22));
        lblChin = new QLabel(centralWidget);
        lblChin->setObjectName(QStringLiteral("lblChin"));
        lblChin->setGeometry(QRect(30, 230, 47, 13));
        lblChout = new QLabel(centralWidget);
        lblChout->setObjectName(QStringLiteral("lblChout"));
        lblChout->setGeometry(QRect(30, 290, 47, 13));
        btnCadastrar = new QPushButton(centralWidget);
        btnCadastrar->setObjectName(QStringLiteral("btnCadastrar"));
        btnCadastrar->setGeometry(QRect(130, 360, 75, 23));
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
        lblNome->setText(QApplication::translate("MainWindow", "Nome:", nullptr));
        lblCpf->setText(QApplication::translate("MainWindow", "CPF:", nullptr));
        lblTel->setText(QApplication::translate("MainWindow", "Telefone:", nullptr));
        lblDatanasci->setText(QApplication::translate("MainWindow", "Data de Nascimento", nullptr));
        lblChin->setText(QApplication::translate("MainWindow", "Check-in", nullptr));
        lblChout->setText(QApplication::translate("MainWindow", "Check-out", nullptr));
        btnCadastrar->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
