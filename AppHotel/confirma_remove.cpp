#include "confirma_remove.hpp"
#include "ui_confirma_remove.h"

confirma_remove::confirma_remove(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirma_remove)
{
    ui->setupUi(this);
}

confirma_remove::~confirma_remove()
{
    delete ui;
}
