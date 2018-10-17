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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(321, 455);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblNome = new QLabel(centralWidget);
        lblNome->setObjectName(QStringLiteral("lblNome"));
        lblNome->setGeometry(QRect(0, 0, 47, 13));
        textEditNome = new QPlainTextEdit(centralWidget);
        textEditNome->setObjectName(QStringLiteral("textEditNome"));
        textEditNome->setGeometry(QRect(0, 20, 291, 21));
        textEditCpf = new QPlainTextEdit(centralWidget);
        textEditCpf->setObjectName(QStringLiteral("textEditCpf"));
        textEditCpf->setGeometry(QRect(0, 70, 291, 21));
        lblCpf = new QLabel(centralWidget);
        lblCpf->setObjectName(QStringLiteral("lblCpf"));
        lblCpf->setGeometry(QRect(0, 50, 31, 16));
        lblTel = new QLabel(centralWidget);
        lblTel->setObjectName(QStringLiteral("lblTel"));
        lblTel->setGeometry(QRect(0, 100, 47, 13));
        textEditTel = new QPlainTextEdit(centralWidget);
        textEditTel->setObjectName(QStringLiteral("textEditTel"));
        textEditTel->setGeometry(QRect(0, 120, 231, 21));
        lblDatanasci = new QLabel(centralWidget);
        lblDatanasci->setObjectName(QStringLiteral("lblDatanasci"));
        lblDatanasci->setGeometry(QRect(0, 150, 111, 16));
        dateNasci = new QDateEdit(centralWidget);
        dateNasci->setObjectName(QStringLiteral("dateNasci"));
        dateNasci->setGeometry(QRect(0, 170, 110, 22));
        dateTimeChin = new QDateTimeEdit(centralWidget);
        dateTimeChin->setObjectName(QStringLiteral("dateTimeChin"));
        dateTimeChin->setGeometry(QRect(0, 220, 194, 22));
        dateTimeChout = new QDateTimeEdit(centralWidget);
        dateTimeChout->setObjectName(QStringLiteral("dateTimeChout"));
        dateTimeChout->setGeometry(QRect(0, 280, 194, 22));
        lblChin = new QLabel(centralWidget);
        lblChin->setObjectName(QStringLiteral("lblChin"));
        lblChin->setGeometry(QRect(0, 200, 47, 13));
        lblChout = new QLabel(centralWidget);
        lblChout->setObjectName(QStringLiteral("lblChout"));
        lblChout->setGeometry(QRect(0, 260, 47, 13));
        btnCadastrar = new QPushButton(centralWidget);
        btnCadastrar->setObjectName(QStringLiteral("btnCadastrar"));
        btnCadastrar->setGeometry(QRect(120, 350, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 321, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
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
