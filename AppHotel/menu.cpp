#include "menu.hpp"
#include "ui_menu.h"
#include "cadastro.hpp"
#include "servicoquarto.hpp"
#include "remove_atualiza.hpp"
#include "busca.hpp"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_btnCadasMenu_clicked(){
    cadastro *x = new cadastro(this);
    x->show();
}

void menu::on_btnServiQuMenu_clicked(){
    servicoquarto *x = new servicoquarto(this);
    x->show();
}

void menu::on_btnRemAtu_clicked(){
    remove_atualiza *x = new remove_atualiza(this);
    x->show();
}

void menu::on_btnBuscMenu_clicked(){
    busca *x = new busca(this);
    x->show();
}
