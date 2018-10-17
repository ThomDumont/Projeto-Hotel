/********************************************************************************
** Form generated from reading UI file 'busca.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCA_H
#define UI_BUSCA_H

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
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QWidget *widget1;
    QFormLayout *formLayout;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(285, 446);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 190, 80, 21));
        widget = new QWidget(Form);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 220, 261, 213));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 1, 0, 1, 1);

        widget1 = new QWidget(Form);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 20, 264, 164));
        formLayout = new QFormLayout(widget1);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        radioButton = new QRadioButton(widget1);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, radioButton);

        radioButton_2 = new QRadioButton(widget1);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, radioButton_2);

        radioButton_3 = new QRadioButton(widget1);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, radioButton_3);

        radioButton_4 = new QRadioButton(widget1);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, radioButton_4);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_2);

        plainTextEdit = new QPlainTextEdit(widget1);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(0, 24));
        plainTextEdit->setMaximumSize(QSize(16777215, 24));

        formLayout->setWidget(6, QFormLayout::LabelRole, plainTextEdit);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QApplication::translate("Form", "Buscar", nullptr));
        label_3->setText(QApplication::translate("Form", "Resultado Encontrado:", nullptr));
        label->setText(QApplication::translate("Form", "Deseja pesquisar por:", nullptr));
        radioButton->setText(QApplication::translate("Form", "Nome", nullptr));
        radioButton_2->setText(QApplication::translate("Form", "CPF", nullptr));
        radioButton_3->setText(QApplication::translate("Form", "Telefone", nullptr));
        radioButton_4->setText(QApplication::translate("Form", "Data de Nascimento", nullptr));
        label_2->setText(QApplication::translate("Form", "Digite o crit\303\251rio da pesquisa:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCA_H
