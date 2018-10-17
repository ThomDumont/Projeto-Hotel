/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cadastro
{
public:
    QDateTimeEdit *dateTimeChout;
    QLabel *lblChin;
    QDateEdit *dateNasci;
    QPlainTextEdit *txtTel;
    QLabel *lblDatanasci;
    QLabel *lblChout;
    QLabel *lblTel;
    QPlainTextEdit *txtCpf;
    QLabel *lblCpf;
    QLabel *lblNome;
    QPlainTextEdit *txtNome;
    QDateTimeEdit *dateTimeChin;
    QPushButton *btnCadastrar;

    void setupUi(QDialog *cadastro)
    {
        if (cadastro->objectName().isEmpty())
            cadastro->setObjectName(QStringLiteral("cadastro"));
        cadastro->resize(317, 388);
        dateTimeChout = new QDateTimeEdit(cadastro);
        dateTimeChout->setObjectName(QStringLiteral("dateTimeChout"));
        dateTimeChout->setGeometry(QRect(10, 290, 194, 22));
        lblChin = new QLabel(cadastro);
        lblChin->setObjectName(QStringLiteral("lblChin"));
        lblChin->setGeometry(QRect(10, 210, 47, 13));
        dateNasci = new QDateEdit(cadastro);
        dateNasci->setObjectName(QStringLiteral("dateNasci"));
        dateNasci->setGeometry(QRect(10, 180, 110, 22));
        txtTel = new QPlainTextEdit(cadastro);
        txtTel->setObjectName(QStringLiteral("txtTel"));
        txtTel->setGeometry(QRect(10, 130, 231, 24));
        lblDatanasci = new QLabel(cadastro);
        lblDatanasci->setObjectName(QStringLiteral("lblDatanasci"));
        lblDatanasci->setGeometry(QRect(10, 160, 111, 16));
        lblChout = new QLabel(cadastro);
        lblChout->setObjectName(QStringLiteral("lblChout"));
        lblChout->setGeometry(QRect(10, 270, 47, 13));
        lblTel = new QLabel(cadastro);
        lblTel->setObjectName(QStringLiteral("lblTel"));
        lblTel->setGeometry(QRect(10, 110, 47, 13));
        txtCpf = new QPlainTextEdit(cadastro);
        txtCpf->setObjectName(QStringLiteral("txtCpf"));
        txtCpf->setGeometry(QRect(10, 80, 291, 24));
        lblCpf = new QLabel(cadastro);
        lblCpf->setObjectName(QStringLiteral("lblCpf"));
        lblCpf->setGeometry(QRect(10, 60, 31, 16));
        lblNome = new QLabel(cadastro);
        lblNome->setObjectName(QStringLiteral("lblNome"));
        lblNome->setGeometry(QRect(10, 10, 47, 13));
        txtNome = new QPlainTextEdit(cadastro);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(10, 30, 291, 24));
        dateTimeChin = new QDateTimeEdit(cadastro);
        dateTimeChin->setObjectName(QStringLiteral("dateTimeChin"));
        dateTimeChin->setGeometry(QRect(10, 230, 194, 22));
        btnCadastrar = new QPushButton(cadastro);
        btnCadastrar->setObjectName(QStringLiteral("btnCadastrar"));
        btnCadastrar->setGeometry(QRect(110, 340, 75, 23));

        retranslateUi(cadastro);

        QMetaObject::connectSlotsByName(cadastro);
    } // setupUi

    void retranslateUi(QDialog *cadastro)
    {
        cadastro->setWindowTitle(QApplication::translate("cadastro", "Dialog", nullptr));
        lblChin->setText(QApplication::translate("cadastro", "Check-in", nullptr));
        lblDatanasci->setText(QApplication::translate("cadastro", "Data de Nascimento", nullptr));
        lblChout->setText(QApplication::translate("cadastro", "Check-out", nullptr));
        lblTel->setText(QApplication::translate("cadastro", "Telefone:", nullptr));
        lblCpf->setText(QApplication::translate("cadastro", "CPF:", nullptr));
        lblNome->setText(QApplication::translate("cadastro", "Nome:", nullptr));
        btnCadastrar->setText(QApplication::translate("cadastro", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadastro: public Ui_cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
