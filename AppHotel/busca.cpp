#include "busca.hpp"
#include "ui_busca.h"
#include <QMessageBox>



using namespace std;
busca::busca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::busca)
{
    ui->setupUi(this);
    arquivo = new QFile("Banco de Dados123.txt");

}

busca::~busca(){
    delete ui;
}

void busca::on_btnBuscar_clicked()
{
    //ui->txtResultado->setPlainText();

    /*if(arquivo.open(QFile::ReadOnly|QFile::Text)){
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
    }*/
    //arquivo->close();

}
