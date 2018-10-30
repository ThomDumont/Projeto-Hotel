#include "servicoquarto.hpp"
#include "ui_servicoquarto.h"
#include "QString"
#include "qfile.h"
#include "qtextstream.h"
#include "qmessagebox.h"
#include "QStringList"


servicoquarto::servicoquarto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::servicoquarto){
    ui->setupUi(this);
    serv = LeFila();

    QString filaInteira;
    int c = serv.getI();
    int t = serv.getF();
    while(c!=t){
        QString temp;
        temp.setNum(serv.at(c));
        filaInteira+=temp+" ";
        c = ((c+1)%(MAX+1));
    }
    ui->txtFila->setText(filaInteira);

}

servicoquarto::~servicoquarto(){
    QTextStream stream;


    QFile *arquivo = new QFile("Fila.txt");
    if(arquivo->open(QIODevice::WriteOnly|QFile::Text)){
           stream.setDevice(arquivo);
    }else{
         QMessageBox::warning(this,"ERRO", "Erro ao abrir no arquivo");
    }


     int c = serv.getI();
     int t = serv.getF();
     while(c!=t){
        stream << serv.at(c) << endl;
        c = ((c+1)%(MAX+1));
     }

    arquivo->close();

    delete ui;
}

FilaC<int> servicoquarto::LeFila(){

    QFile arquivo("Fila.txt");
    if(arquivo.open(QFile::ReadOnly|QFile::Text)){
        //QMessageBox::warning(this,"ERRO","Erro ao abrir arquivo");
    }
    QTextStream entrada(&arquivo);

    FilaC<int> f;

    while (!entrada.atEnd()){
        QString nnome = entrada.readLine();
        int n = nnome.toInt();
        f.enfileira(n);
    }

    arquivo.close();
    return f;

}



void servicoquarto::on_btnAddfi_clicked(){
    QString nnome = ui->txtNumQu->toPlainText();
    int n = nnome.toInt();
    serv.enfileira(n);
    int c = serv.getI();
    int t = serv.getF();
    QString filaInteira;
    while(c!=t){
        QString temp;
        temp.setNum(serv.at(c));
        filaInteira+=temp+" ";
        c = ((c+1)%(MAX+1));
    }
    ui->txtFila->setText(filaInteira);
    ui->txtNumQu->setText("");
}

void servicoquarto::on_btnExfi_clicked(){
     serv.desenfileira();
     int c = serv.getI();
     int t = serv.getF();
     QString filaInteira;
     while(c!=t){
         QString temp;
         temp.setNum(serv.at(c));
         filaInteira+=temp+" ";
         c = ((c+1)%(MAX+1));
     }
     ui->txtFila->setText(filaInteira);
     ui->txtNumQu->setText("");
}
