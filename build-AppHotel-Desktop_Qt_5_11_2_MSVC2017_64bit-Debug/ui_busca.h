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

class Ui_busca
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QRadioButton *radNome;
    QRadioButton *radCpf;
    QRadioButton *radTel;
    QRadioButton *radDatanasc;
    QLabel *label_2;
    QPlainTextEdit *txtCriterio;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTextBrowser *txtResultado;
    QPushButton *btnBuscar;

    void setupUi(QDialog *busca)
    {
        if (busca->objectName().isEmpty())
            busca->setObjectName(QStringLiteral("busca"));
        busca->resize(290, 441);
        layoutWidget = new QWidget(busca);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 264, 164));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        radNome = new QRadioButton(layoutWidget);
        radNome->setObjectName(QStringLiteral("radNome"));

        formLayout->setWidget(1, QFormLayout::LabelRole, radNome);

        radCpf = new QRadioButton(layoutWidget);
        radCpf->setObjectName(QStringLiteral("radCpf"));

        formLayout->setWidget(2, QFormLayout::LabelRole, radCpf);

        radTel = new QRadioButton(layoutWidget);
        radTel->setObjectName(QStringLiteral("radTel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, radTel);

        radDatanasc = new QRadioButton(layoutWidget);
        radDatanasc->setObjectName(QStringLiteral("radDatanasc"));

        formLayout->setWidget(4, QFormLayout::LabelRole, radDatanasc);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_2);

        txtCriterio = new QPlainTextEdit(layoutWidget);
        txtCriterio->setObjectName(QStringLiteral("txtCriterio"));
        txtCriterio->setMinimumSize(QSize(0, 24));
        txtCriterio->setMaximumSize(QSize(16777215, 24));

        formLayout->setWidget(6, QFormLayout::LabelRole, txtCriterio);

        layoutWidget_2 = new QWidget(busca);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 210, 261, 213));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        txtResultado = new QTextBrowser(layoutWidget_2);
        txtResultado->setObjectName(QStringLiteral("txtResultado"));

        gridLayout->addWidget(txtResultado, 1, 0, 1, 1);

        btnBuscar = new QPushButton(busca);
        btnBuscar->setObjectName(QStringLiteral("btnBuscar"));
        btnBuscar->setGeometry(QRect(100, 180, 80, 21));

        retranslateUi(busca);

        QMetaObject::connectSlotsByName(busca);
    } // setupUi

    void retranslateUi(QDialog *busca)
    {
        busca->setWindowTitle(QApplication::translate("busca", "Dialog", nullptr));
        label->setText(QApplication::translate("busca", "Deseja pesquisar por:", nullptr));
        radNome->setText(QApplication::translate("busca", "Nome", nullptr));
        radCpf->setText(QApplication::translate("busca", "CPF", nullptr));
        radTel->setText(QApplication::translate("busca", "Telefone", nullptr));
        radDatanasc->setText(QApplication::translate("busca", "Data de Nascimento", nullptr));
        label_2->setText(QApplication::translate("busca", "Digite o crit\303\251rio da pesquisa:", nullptr));
        label_3->setText(QApplication::translate("busca", "Resultado Encontrado:", nullptr));
        btnBuscar->setText(QApplication::translate("busca", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class busca: public Ui_busca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCA_H
