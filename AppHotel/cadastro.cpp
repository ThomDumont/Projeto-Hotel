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
    if(arquivo->open(QIODevice::WriteOnly|QFile::Text)){
           stream.setDevice(arquivo);
    }else{
         QMessageBox::warning(this,"ERRO", "Erro ao abrir no arquivo");
    }

    red(v.getRaiz());

    delete ui;
}


void cadastro::on_btnCadastrar_clicked(){


    QString nnome = ui->txtNome->toPlainText();
    QString ccpf = ui->txtCpf->toPlainText();
    QString ttel = ui->txtTel->toPlainText();
    QString dtnasc = ui->dateNasci->date().toString();
    QString chin = ui->dateTimeChin->date().toString()+" "+ ui->dateTimeChin->time().toString();
    QString chou = ui->dateTimeChout->date().toString()+" "+ui->dateTimeChout->time().toString();

    Cadastrado n(nnome,ccpf,ttel,dtnasc,chin,chou);

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
        Cadastrado n(w.at(0),w.at(1),w.at(2),w.at(3),w.at(4),w.at(5));
        q.insere(n);
    }

    arquivo.close();
    return q;
}

void cadastro::red(No<Cadastrado>* r){
    if(r){
        stream<<r->getValor().Nome<<";"<<r->getValor().Cpf<<";"
             <<r->getValor().Telefon<<";"<<r->getValor().DataNasc<<";"
            <<r->getValor().CheckIn<<";"<<r->getValor().CheckOut<<";"<<endl;
        red(r->esq);
        red(r->dir);
    }
}


void cadastro::on_btnBusca_clicked(){
    QString CpfB = ui->txtBuscaCpf->toPlainText();
    Cadastrado n(CpfB);
    No<Cadastrado>* w = v.Busca(n);
    if(w->getValor().Cpf == CpfB){
        QString nome = "Nome: "+w->getValor().Nome+"\n";
        QString cpf = "CPF: "+w->getValor().Cpf+"\n";
        QString tel = "Telefone: "+w->getValor().Telefon+"\n";
        QString data = "Data de Nascimento: "+w->getValor().DataNasc+"\n";
        QString cin = "Check In: "+w->getValor().CheckIn+"\n";
        QString cout = "Check Out: "+w->getValor().CheckOut+"\n";
        ui->txtNomeAtt->setPlainText(w->getValor().Nome);
        ui->txtCpfAtt->setPlainText(w->getValor().Cpf);
        ui->txtTelAtt->setPlainText(w->getValor().Telefon);
        ui->txtResultado->setText(nome+cpf+tel+data+cin+cout);
    }
    else{
        QMessageBox::warning(this,"Não Encontrado","O cliente não foi encontrado");
    }
}

void cadastro::on_btnRemove_clicked(){
    QString CpfB = ui->txtBuscaCpf->toPlainText();
    Cadastrado n(CpfB);
    No<Cadastrado>* w = v.Busca(n);
    if(w->getValor().Cpf == CpfB){
        v.remove(w);
        QMessageBox::information(this,"Removido","O cliente foi removido com sucesso!");
        ui->txtResultado->setText("");
        ui->txtNomeAtt->setPlainText("");
        ui->txtCpfAtt->setPlainText("");
        ui->txtTelAtt->setPlainText("");
    }
    else{
        ui->txtResultado->setText("");
        QMessageBox::warning(this,"Não Encontrado","Não é possivel remover um cliente não encontrado");

    }
}

void cadastro::on_btnAtualiza_clicked(){
    
    QString CpfB = ui->txtBuscaCpf->toPlainText();
    Cadastrado n(CpfB);
    No<Cadastrado>* w = v.Busca(n);
    ui->txtResultado->setText("");
    if(w->getValor().Cpf == CpfB){
        v.remove(w);

        QString nnome = ui->txtNomeAtt->toPlainText();
        QString ccpf = ui->txtCpfAtt->toPlainText();
        QString chin = ui->dateTimeChinAtt->date().toString()+" "+ ui->dateTimeChin->time().toString();
        QString chou = ui->dateTimeChoutAtt->date().toString()+" "+ui->dateTimeChout->time().toString();
        QString ttel = ui->txtTelAtt->toPlainText();
        QString dtnasc = ui->dateNasciAtt->date().toString();
        Cadastrado q(nnome,ccpf,ttel,dtnasc,chin,chou);

        v.insere(q);

        QMessageBox::information(this,"Usuário atualizado","Usuário atualizado com sucesso;");
    }
    else{
        QMessageBox::warning(this,"Não Encontrado","Não é possivel alterar um cliente não encontrado");
    }

}
