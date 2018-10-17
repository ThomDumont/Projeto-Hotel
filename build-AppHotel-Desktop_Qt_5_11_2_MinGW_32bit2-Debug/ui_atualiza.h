/********************************************************************************
** Form generated from reading UI file 'atualiza.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATUALIZA_H
#define UI_ATUALIZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QDateTimeEdit *dateTimeChout;
    QDateEdit *dateNasci;
    QLabel *lblTel;
    QPlainTextEdit *textEditNome;
    QPlainTextEdit *textEditTel;
    QDateTimeEdit *dateTimeChin;
    QLabel *lblNome;
    QLabel *lblChin;
    QPushButton *btnCadastrar;
    QPlainTextEdit *textEditCpf;
    QLabel *lblChout;
    QLabel *lblCpf;
    QLabel *lblDatanasci;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(332, 383);
        dateTimeChout = new QDateTimeEdit(Form);
        dateTimeChout->setObjectName(QStringLiteral("dateTimeChout"));
        dateTimeChout->setGeometry(QRect(20, 290, 194, 22));
        dateNasci = new QDateEdit(Form);
        dateNasci->setObjectName(QStringLiteral("dateNasci"));
        dateNasci->setGeometry(QRect(20, 180, 110, 22));
        lblTel = new QLabel(Form);
        lblTel->setObjectName(QStringLiteral("lblTel"));
        lblTel->setGeometry(QRect(20, 110, 47, 13));
        textEditNome = new QPlainTextEdit(Form);
        textEditNome->setObjectName(QStringLiteral("textEditNome"));
        textEditNome->setGeometry(QRect(20, 30, 291, 24));
        textEditTel = new QPlainTextEdit(Form);
        textEditTel->setObjectName(QStringLiteral("textEditTel"));
        textEditTel->setGeometry(QRect(20, 130, 231, 24));
        dateTimeChin = new QDateTimeEdit(Form);
        dateTimeChin->setObjectName(QStringLiteral("dateTimeChin"));
        dateTimeChin->setGeometry(QRect(20, 230, 194, 22));
        lblNome = new QLabel(Form);
        lblNome->setObjectName(QStringLiteral("lblNome"));
        lblNome->setGeometry(QRect(20, 10, 47, 13));
        lblChin = new QLabel(Form);
        lblChin->setObjectName(QStringLiteral("lblChin"));
        lblChin->setGeometry(QRect(20, 210, 47, 13));
        btnCadastrar = new QPushButton(Form);
        btnCadastrar->setObjectName(QStringLiteral("btnCadastrar"));
        btnCadastrar->setGeometry(QRect(120, 340, 75, 23));
        textEditCpf = new QPlainTextEdit(Form);
        textEditCpf->setObjectName(QStringLiteral("textEditCpf"));
        textEditCpf->setGeometry(QRect(20, 80, 291, 24));
        lblChout = new QLabel(Form);
        lblChout->setObjectName(QStringLiteral("lblChout"));
        lblChout->setGeometry(QRect(20, 270, 47, 13));
        lblCpf = new QLabel(Form);
        lblCpf->setObjectName(QStringLiteral("lblCpf"));
        lblCpf->setGeometry(QRect(20, 60, 31, 16));
        lblDatanasci = new QLabel(Form);
        lblDatanasci->setObjectName(QStringLiteral("lblDatanasci"));
        lblDatanasci->setGeometry(QRect(20, 160, 111, 16));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        lblTel->setText(QApplication::translate("Form", "Telefone:", nullptr));
        lblNome->setText(QApplication::translate("Form", "Nome:", nullptr));
        lblChin->setText(QApplication::translate("Form", "Check-in", nullptr));
        btnCadastrar->setText(QApplication::translate("Form", "Atualizar", nullptr));
        lblChout->setText(QApplication::translate("Form", "Check-out", nullptr));
        lblCpf->setText(QApplication::translate("Form", "CPF:", nullptr));
        lblDatanasci->setText(QApplication::translate("Form", "Data de Nascimento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATUALIZA_H
