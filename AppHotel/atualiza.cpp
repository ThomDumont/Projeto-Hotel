#include "atualiza.hpp"
#include "ui_atualiza.h"

atualiza::atualiza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atualiza)
{
    ui->setupUi(this);
}

atualiza::~atualiza()
{
    delete ui;
}
