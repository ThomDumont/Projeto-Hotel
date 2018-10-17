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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_atualiza
{
public:
    QPlainTextEdit *textEditCpf;
    QLabel *lblDatanasci;
    QDateEdit *dateNasci;
    QDateTimeEdit *dateTimeChout;
    QLabel *lblTel;
    QDateTimeEdit *dateTimeChin;
    QLabel *lblChin;
    QLabel *lblChout;
    QLabel *lblNome;
    QPlainTextEdit *textEditNome;
    QPushButton *btnAtualizar;
    QLabel *lblCpf;
    QPlainTextEdit *textEditTel;

    void setupUi(QDialog *atualiza)
    {
        if (atualiza->objectName().isEmpty())
            atualiza->setObjectName(QStringLiteral("atualiza"));
        atualiza->resize(312, 380);
        textEditCpf = new QPlainTextEdit(atualiza);
        textEditCpf->setObjectName(QStringLiteral("textEditCpf"));
        textEditCpf->setGeometry(QRect(10, 80, 291, 24));
        lblDatanasci = new QLabel(atualiza);
        lblDatanasci->setObjectName(QStringLiteral("lblDatanasci"));
        lblDatanasci->setGeometry(QRect(10, 160, 111, 16));
        dateNasci = new QDateEdit(atualiza);
        dateNasci->setObjectName(QStringLiteral("dateNasci"));
        dateNasci->setGeometry(QRect(10, 180, 110, 22));
        dateTimeChout = new QDateTimeEdit(atualiza);
        dateTimeChout->setObjectName(QStringLiteral("dateTimeChout"));
        dateTimeChout->setGeometry(QRect(10, 290, 194, 22));
        lblTel = new QLabel(atualiza);
        lblTel->setObjectName(QStringLiteral("lblTel"));
        lblTel->setGeometry(QRect(10, 110, 47, 13));
        dateTimeChin = new QDateTimeEdit(atualiza);
        dateTimeChin->setObjectName(QStringLiteral("dateTimeChin"));
        dateTimeChin->setGeometry(QRect(10, 230, 194, 22));
        lblChin = new QLabel(atualiza);
        lblChin->setObjectName(QStringLiteral("lblChin"));
        lblChin->setGeometry(QRect(10, 210, 47, 13));
        lblChout = new QLabel(atualiza);
        lblChout->setObjectName(QStringLiteral("lblChout"));
        lblChout->setGeometry(QRect(10, 270, 47, 13));
        lblNome = new QLabel(atualiza);
        lblNome->setObjectName(QStringLiteral("lblNome"));
        lblNome->setGeometry(QRect(10, 10, 47, 13));
        textEditNome = new QPlainTextEdit(atualiza);
        textEditNome->setObjectName(QStringLiteral("textEditNome"));
        textEditNome->setGeometry(QRect(10, 30, 291, 24));
        btnAtualizar = new QPushButton(atualiza);
        btnAtualizar->setObjectName(QStringLiteral("btnAtualizar"));
        btnAtualizar->setGeometry(QRect(110, 340, 75, 23));
        lblCpf = new QLabel(atualiza);
        lblCpf->setObjectName(QStringLiteral("lblCpf"));
        lblCpf->setGeometry(QRect(10, 60, 31, 16));
        textEditTel = new QPlainTextEdit(atualiza);
        textEditTel->setObjectName(QStringLiteral("textEditTel"));
        textEditTel->setGeometry(QRect(10, 130, 231, 24));

        retranslateUi(atualiza);

        QMetaObject::connectSlotsByName(atualiza);
    } // setupUi

    void retranslateUi(QDialog *atualiza)
    {
        atualiza->setWindowTitle(QApplication::translate("atualiza", "Dialog", nullptr));
        lblDatanasci->setText(QApplication::translate("atualiza", "Data de Nascimento", nullptr));
        lblTel->setText(QApplication::translate("atualiza", "Telefone:", nullptr));
        lblChin->setText(QApplication::translate("atualiza", "Check-in", nullptr));
        lblChout->setText(QApplication::translate("atualiza", "Check-out", nullptr));
        lblNome->setText(QApplication::translate("atualiza", "Nome:", nullptr));
        btnAtualizar->setText(QApplication::translate("atualiza", "Atualizar", nullptr));
        lblCpf->setText(QApplication::translate("atualiza", "CPF:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class atualiza: public Ui_atualiza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATUALIZA_H
