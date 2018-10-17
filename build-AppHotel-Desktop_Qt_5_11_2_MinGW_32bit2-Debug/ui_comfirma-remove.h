/********************************************************************************
** Form generated from reading UI file 'comfirma-remove.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMFIRMA_2D_REMOVE_H
#define UI_COMFIRMA_2D_REMOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QPushButton *btnS;
    QPushButton *btnN;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(278, 73);
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 251, 16));
        btnS = new QPushButton(Form);
        btnS->setObjectName(QStringLiteral("btnS"));
        btnS->setGeometry(QRect(50, 40, 80, 21));
        btnN = new QPushButton(Form);
        btnN->setObjectName(QStringLiteral("btnN"));
        btnN->setGeometry(QRect(140, 40, 80, 21));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label->setText(QApplication::translate("Form", "Voc\303\252 tem certeza que quer remover o cadastrado:", nullptr));
        btnS->setText(QApplication::translate("Form", "Sim", nullptr));
        btnN->setText(QApplication::translate("Form", "N\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMFIRMA_2D_REMOVE_H
