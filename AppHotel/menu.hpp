#ifndef MENU_HPP
#define MENU_HPP

#include <QDialog>

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_btnCadasMenu_clicked();

    void on_btnServiQuMenu_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_HPP
