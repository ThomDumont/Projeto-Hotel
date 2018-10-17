/********************************************************************************
** Form generated from reading UI file 'remove_atualiza.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_ATUALIZA_H
#define UI_REMOVE_ATUALIZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_remove_atualiza
{
public:
    QPushButton *btnAtualizarRA;
    QPushButton *btnRemoverRA;
    QWidget *layoutWidget;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QRadioButton *radNomeRA;
    QRadioButton *radCpfRA;
    QRadioButton *radTelRA;
    QRadioButton *radDatanascRA;
    QLabel *label_5;
    QPlainTextEdit *txtCriterioRA;
    QLabel *label_7;
    QPushButton *btnBuscarRA;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QTextBrowser *txtResultadoRA;

    void setupUi(QDialog *remove_atualiza)
    {
        if (remove_atualiza->objectName().isEmpty())
            remove_atualiza->setObjectName(QStringLiteral("remove_atualiza"));
        remove_atualiza->resize(287, 494);
        btnAtualizarRA = new QPushButton(remove_atualiza);
        btnAtualizarRA->setObjectName(QStringLiteral("btnAtualizarRA"));
        btnAtualizarRA->setGeometry(QRect(20, 460, 111, 21));
        btnRemoverRA = new QPushButton(remove_atualiza);
        btnRemoverRA->setObjectName(QStringLiteral("btnRemoverRA"));
        btnRemoverRA->setGeometry(QRect(150, 460, 111, 21));
        layoutWidget = new QWidget(remove_atualiza);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 264, 164));
        formLayout_3 = new QFormLayout(layoutWidget);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        radNomeRA = new QRadioButton(layoutWidget);
        radNomeRA->setObjectName(QStringLiteral("radNomeRA"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, radNomeRA);

        radCpfRA = new QRadioButton(layoutWidget);
        radCpfRA->setObjectName(QStringLiteral("radCpfRA"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, radCpfRA);

        radTelRA = new QRadioButton(layoutWidget);
        radTelRA->setObjectName(QStringLiteral("radTelRA"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, radTelRA);

        radDatanascRA = new QRadioButton(layoutWidget);
        radDatanascRA->setObjectName(QStringLiteral("radDatanascRA"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, radDatanascRA);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_5);

        txtCriterioRA = new QPlainTextEdit(layoutWidget);
        txtCriterioRA->setObjectName(QStringLiteral("txtCriterioRA"));
        txtCriterioRA->setMinimumSize(QSize(0, 24));
        txtCriterioRA->setMaximumSize(QSize(16777215, 24));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, txtCriterioRA);

        label_7 = new QLabel(remove_atualiza);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 440, 141, 16));
        btnBuscarRA = new QPushButton(remove_atualiza);
        btnBuscarRA->setObjectName(QStringLiteral("btnBuscarRA"));
        btnBuscarRA->setGeometry(QRect(100, 190, 80, 21));
        layoutWidget_2 = new QWidget(remove_atualiza);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 220, 261, 213));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        txtResultadoRA = new QTextBrowser(layoutWidget_2);
        txtResultadoRA->setObjectName(QStringLiteral("txtResultadoRA"));

        gridLayout_2->addWidget(txtResultadoRA, 1, 0, 1, 1);


        retranslateUi(remove_atualiza);

        QMetaObject::connectSlotsByName(remove_atualiza);
    } // setupUi

    void retranslateUi(QDialog *remove_atualiza)
    {
        remove_atualiza->setWindowTitle(QApplication::translate("remove_atualiza", "Dialog", nullptr));
        btnAtualizarRA->setText(QApplication::translate("remove_atualiza", "Atualizar cadastro", nullptr));
        btnRemoverRA->setText(QApplication::translate("remove_atualiza", "Remover cadastro", nullptr));
        label_4->setText(QApplication::translate("remove_atualiza", "Deseja pesquisar por:", nullptr));
        radNomeRA->setText(QApplication::translate("remove_atualiza", "Nome", nullptr));
        radCpfRA->setText(QApplication::translate("remove_atualiza", "CPF", nullptr));
        radTelRA->setText(QApplication::translate("remove_atualiza", "Telefone", nullptr));
        radDatanascRA->setText(QApplication::translate("remove_atualiza", "Data de Nascimento", nullptr));
        label_5->setText(QApplication::translate("remove_atualiza", "Digite o crit\303\251rio da pesquisa:", nullptr));
        label_7->setText(QApplication::translate("remove_atualiza", "Qual opera\303\247\303\243o deseja fazer:", nullptr));
        btnBuscarRA->setText(QApplication::translate("remove_atualiza", "Buscar", nullptr));
        label_6->setText(QApplication::translate("remove_atualiza", "Resultado Encontrado:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove_atualiza: public Ui_remove_atualiza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_ATUALIZA_H
