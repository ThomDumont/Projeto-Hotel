#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "menu.hpp"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_btnEntrar_clicked(){
    hide();
    menu *x = new menu(this);
    x->show();
}
