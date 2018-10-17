#include "remove_atualiza.hpp"
#include "ui_remove_atualiza.h"
#include "atualiza.hpp"
#include "confirma_remove.hpp"

remove_atualiza::remove_atualiza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::remove_atualiza)
{
    ui->setupUi(this);
}

remove_atualiza::~remove_atualiza()
{
    delete ui;
}

void remove_atualiza::on_btnAtualizarRA_clicked(){
    atualiza *x = new atualiza(this);
    x->show();
}

void remove_atualiza::on_btnRemoverRA_clicked(){
    confirma_remove *x = new confirma_remove(this);
    x->show();
}
