/********************************************************************************
** Form generated from reading UI file 'remove-atualiza.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_2D_ATUALIZA_H
#define UI_REMOVE_2D_ATUALIZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(284, 484);
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 264, 164));
        formLayout_3 = new QFormLayout(layoutWidget);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        radioButton_5 = new QRadioButton(layoutWidget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, radioButton_5);

        radioButton_6 = new QRadioButton(layoutWidget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, radioButton_6);

        radioButton_7 = new QRadioButton(layoutWidget);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, radioButton_7);

        radioButton_8 = new QRadioButton(layoutWidget);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, radioButton_8);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_5);

        plainTextEdit_2 = new QPlainTextEdit(layoutWidget);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setMinimumSize(QSize(0, 24));
        plainTextEdit_2->setMaximumSize(QSize(16777215, 24));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, plainTextEdit_2);

        layoutWidget_2 = new QWidget(Form);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 210, 261, 213));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(layoutWidget_2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        gridLayout_2->addWidget(textBrowser_2, 1, 0, 1, 1);

        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 180, 80, 21));
        label_7 = new QLabel(Form);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 430, 141, 16));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 450, 111, 21));
        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 450, 111, 21));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label_4->setText(QApplication::translate("Form", "Deseja pesquisar por:", nullptr));
        radioButton_5->setText(QApplication::translate("Form", "Nome", nullptr));
        radioButton_6->setText(QApplication::translate("Form", "CPF", nullptr));
        radioButton_7->setText(QApplication::translate("Form", "Telefone", nullptr));
        radioButton_8->setText(QApplication::translate("Form", "Data de Nascimento", nullptr));
        label_5->setText(QApplication::translate("Form", "Digite o crit\303\251rio da pesquisa:", nullptr));
        label_6->setText(QApplication::translate("Form", "Resultado Encontrado:", nullptr));
        pushButton->setText(QApplication::translate("Form", "Buscar", nullptr));
        label_7->setText(QApplication::translate("Form", "Qual opera\303\247\303\243o deseja fazer:", nullptr));
        pushButton_2->setText(QApplication::translate("Form", "Atualizar cadastro", nullptr));
        pushButton_3->setText(QApplication::translate("Form", "Remover cadastro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_2D_ATUALIZA_H
