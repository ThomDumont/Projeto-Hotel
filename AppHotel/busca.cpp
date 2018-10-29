#include "busca.hpp"
#include "ui_busca.h"
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDataStream>
#include <QDateEdit>
#include <QDateTime>
#include <QMessageBox>



QString lugar= "C:/Users/pietr/Desktop/projeto P1/Projeto-Hotel";
//QString lugar= "C:/Users/Thomas/Documents/";
QString nomencl = "Banco_de_dados.txt";

using namespace std;
busca::busca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::busca)
{
    ui->setupUi(this);
}

busca::~busca(){
    delete ui;
}

void busca::on_btnBuscar_clicked()
{
    QFile arquivo(lugar+nomencl);
    if(!arquivo.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"ERRO","Erro ao abrir arquivo");

    }
    QTextStream entrada(&arquivo);
    QString busca = ui->txtCriterio->toPlainText();

    QString achado;

    while (!entrada.atEnd()){
        QString nnome = entrada.readLine();
        if (nnome.contains(busca, Qt::CaseSensitive)) {
            achado = nnome;

        }
    }

    if(achado.isNull()){
        QMessageBox::warning(this,"ERRO","nada foi achado");
    }
    else{
        ui->txtResultado->setPlainText(achado);
    }
    arquivo.close();

}
