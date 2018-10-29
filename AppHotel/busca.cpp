#include "busca.hpp"
#include "ui_busca.h"
#include <QTextStream>
#include <QMessageBox>

QString lugar= "C:/Users/Thomas/Documents/";

QString nomencl = "Banco_de_dados.txt";
using namespace std;
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

void busca::on_btnBuscar_clicked()
{
    QFile arquivo(lugar+nomencl);
    if(!arquivo.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"ERRO","Erro ao abrir arquivo");

    }
    QTextStream entrada(&arquivo);
    QString nnome = entrada.readLine();
    ui->txtResultado->setPlainText(nnome);

    arquivo.close();

}
