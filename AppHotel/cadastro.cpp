#include "cadastro.hpp"
#include "ui_cadastro.h"
#include <QMessageBox>
#include "arv.hpp"
#include <qfile.h>
#include <qtextstream.h>
#include <QString>
#include <QStringList>

using namespace std;

static QFile *arquivo;
static QTextStream stream;

cadastro::cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro){
    ui->setupUi(this);

    v = LeArv();

}

cadastro::~cadastro(){
    
    arquivo = new QFile("Arvore.txt");
    if(arquivo->open(QIODevice::WriteOnly|QIODevice::Append|QFile::Text)){
           stream.setDevice(arquivo);
    }else{
         QMessageBox::warning(this,"ERRO", "Erro ao abrir no arquivo");
    }

    redw(v.getRaiz());

    delete ui;
}


void cadastro::on_btnCadastrar_clicked(){


    QString nnome = ui->txtNome->toPlainText();
    QString ccpf = ui->txtCpf->toPlainText();
    QString ttel = ui->txtTel->toPlainText();
    QString dtnasc = ui->dateNasci->date().toString();
    QString chin = ui->dateTimeChin->date().toString()+" "+ ui->dateTimeChin->time().toString();
    QString chou = ui->dateTimeChout->date().toString()+" "+ui->dateTimeChout->time().toString();

    Cadastrado n(nnome,ccpf,chin,chou);

    v.insere(n);

    ui->txtNome->clear();
    ui->txtCpf->clear();
    ui->txtTel->clear();
    ui->dateNasci->clear();
    ui->dateTimeChin->clear();
    ui->dateTimeChout->clear();
}

Arv<Cadastrado> cadastro::LeArv(){


    QFile arquivo("Arvore.txt");
    if(arquivo.open(QFile::ReadOnly|QFile::Text)){
        //QMessageBox::warning(this,"ERRO","Erro ao abrir arquivo");
    }
    QTextStream entrada(&arquivo);

    Arv<Cadastrado> q;

    while (!entrada.atEnd()){
        QString nnome = entrada.readLine();
        QStringList w = nnome.split(";");
        Cadastrado n(w.at(0),w.at(1),w.at(4),w.at(5));
        q.insere(n);
    }

    arquivo.close();
    return q;
}

void cadastro::redw(No<Cadastrado>* r){
    if(r){
        stream<<r->getValor().Nome<<";"<<r->getValor().Cpf
             <<r->getValor().CheckIn<<";"<<r->getValor().CheckOut<<";"<<endl;
        redw(r->esq);
        redw(r->dir);
    }
}

