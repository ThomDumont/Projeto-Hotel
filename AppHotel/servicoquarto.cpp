#include "servicoquarto.hpp"
#include "ui_servicoquarto.h"

servicoquarto::servicoquarto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::servicoquarto){
    ui->setupUi(this);
}

servicoquarto::~servicoquarto(){
    delete ui;
}


