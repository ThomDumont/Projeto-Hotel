/********************************************************************************
** Form generated from reading UI file 'servicoquarto.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICOQUARTO_H
#define UI_SERVICOQUARTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_servicoquarto
{
public:
    QPushButton *btnExfi;
    QLabel *label_3;
    QTextBrowser *txtFila;
    QTextEdit *txtNumQu;
    QPushButton *btnAddfi;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *servicoquarto)
    {
        if (servicoquarto->objectName().isEmpty())
            servicoquarto->setObjectName(QStringLiteral("servicoquarto"));
        servicoquarto->resize(278, 314);
        btnExfi = new QPushButton(servicoquarto);
        btnExfi->setObjectName(QStringLiteral("btnExfi"));
        btnExfi->setGeometry(QRect(160, 130, 75, 23));
        label_3 = new QLabel(servicoquarto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 180, 181, 31));
        txtFila = new QTextBrowser(servicoquarto);
        txtFila->setObjectName(QStringLiteral("txtFila"));
        txtFila->setGeometry(QRect(20, 210, 239, 90));
        txtNumQu = new QTextEdit(servicoquarto);
        txtNumQu->setObjectName(QStringLiteral("txtNumQu"));
        txtNumQu->setGeometry(QRect(30, 90, 231, 21));
        txtNumQu->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        txtNumQu->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        txtNumQu->setTabStopDistance(0);
        btnAddfi = new QPushButton(servicoquarto);
        btnAddfi->setObjectName(QStringLiteral("btnAddfi"));
        btnAddfi->setGeometry(QRect(30, 130, 91, 23));
        label_2 = new QLabel(servicoquarto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 30, 91, 20));
        label = new QLabel(servicoquarto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 239, 13));

        retranslateUi(servicoquarto);

        QMetaObject::connectSlotsByName(servicoquarto);
    } // setupUi

    void retranslateUi(QDialog *servicoquarto)
    {
        servicoquarto->setWindowTitle(QApplication::translate("servicoquarto", "Dialog", nullptr));
        btnExfi->setText(QApplication::translate("servicoquarto", "Excluir da fila", nullptr));
        label_3->setText(QApplication::translate("servicoquarto", "Fila para o servi\303\247o de quarto", nullptr));
        btnAddfi->setText(QApplication::translate("servicoquarto", "Adicionar na fila", nullptr));
        label_2->setText(QApplication::translate("servicoquarto", "Servi\303\247o de quarto", nullptr));
        label->setText(QApplication::translate("servicoquarto", "Numero do quarto que solicita servi\303\247o de quarto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class servicoquarto: public Ui_servicoquarto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICOQUARTO_H
