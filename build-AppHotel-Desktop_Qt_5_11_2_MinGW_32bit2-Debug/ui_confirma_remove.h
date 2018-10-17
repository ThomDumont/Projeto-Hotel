/********************************************************************************
** Form generated from reading UI file 'confirma_remove.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMA_REMOVE_H
#define UI_CONFIRMA_REMOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_confirma_remove
{
public:
    QLabel *label;
    QPushButton *btnN;
    QPushButton *btnS;

    void setupUi(QDialog *confirma_remove)
    {
        if (confirma_remove->objectName().isEmpty())
            confirma_remove->setObjectName(QStringLiteral("confirma_remove"));
        confirma_remove->resize(264, 72);
        label = new QLabel(confirma_remove);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 251, 16));
        btnN = new QPushButton(confirma_remove);
        btnN->setObjectName(QStringLiteral("btnN"));
        btnN->setGeometry(QRect(130, 40, 80, 21));
        btnS = new QPushButton(confirma_remove);
        btnS->setObjectName(QStringLiteral("btnS"));
        btnS->setGeometry(QRect(40, 40, 80, 21));

        retranslateUi(confirma_remove);

        QMetaObject::connectSlotsByName(confirma_remove);
    } // setupUi

    void retranslateUi(QDialog *confirma_remove)
    {
        confirma_remove->setWindowTitle(QApplication::translate("confirma_remove", "Dialog", nullptr));
        label->setText(QApplication::translate("confirma_remove", "Voc\303\252 tem certeza que quer remover o cadastrado:", nullptr));
        btnN->setText(QApplication::translate("confirma_remove", "N\303\243o", nullptr));
        btnS->setText(QApplication::translate("confirma_remove", "Sim", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirma_remove: public Ui_confirma_remove {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMA_REMOVE_H
