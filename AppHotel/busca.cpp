#include "busca.hpp"
#include "ui_busca.h"

busca::busca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::busca)
{
    ui->setupUi(this);
}

busca::~busca()
{
    delete ui;
}
