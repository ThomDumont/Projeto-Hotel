#include "menu.hpp"
#include "ui_menu.h"
#include "cadastro.hpp"
#include "servicoquarto.hpp"


menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu){
    ui->setupUi(this);
}

menu::~menu(){
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

