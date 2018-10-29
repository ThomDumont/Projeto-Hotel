/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QPushButton *btnServiQuMenu;
    QPushButton *btnCadasMenu;
    QPushButton *btnBuscMenu;
    QPushButton *btnRemAtu;
    QLabel *label;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(125, 179);
        btnServiQuMenu = new QPushButton(menu);
        btnServiQuMenu->setObjectName(QStringLiteral("btnServiQuMenu"));
        btnServiQuMenu->setGeometry(QRect(10, 140, 101, 23));
        btnCadasMenu = new QPushButton(menu);
        btnCadasMenu->setObjectName(QStringLiteral("btnCadasMenu"));
        btnCadasMenu->setGeometry(QRect(10, 50, 101, 23));
        btnBuscMenu = new QPushButton(menu);
        btnBuscMenu->setObjectName(QStringLiteral("btnBuscMenu"));
        btnBuscMenu->setGeometry(QRect(10, 80, 101, 23));
        btnRemAtu = new QPushButton(menu);
        btnRemAtu->setObjectName(QStringLiteral("btnRemAtu"));
        btnRemAtu->setGeometry(QRect(10, 110, 101, 23));
        label = new QLabel(menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 47, 13));

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Dialog", nullptr));
        btnServiQuMenu->setText(QApplication::translate("menu", "Servi\303\247o de quarto", nullptr));
        btnCadasMenu->setText(QApplication::translate("menu", "Cadastrar", nullptr));
        btnBuscMenu->setText(QApplication::translate("menu", "Buscar", nullptr));
        btnRemAtu->setText(QApplication::translate("menu", "Remover/Atualizar", nullptr));
        label->setText(QApplication::translate("menu", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
