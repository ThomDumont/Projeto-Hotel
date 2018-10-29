#include "cadastro.hpp"
#include "ui_cadastro.h"
#include <QFile>
#include <QTextStream>
#include <QDataStream>
#include <QDateEdit>
#include <QDateTime>
#include <QMessageBox>


//QString local= "C:/Users/pietr/Desktop/projeto P1/Projeto-Hotel";
using namespace std;
QString local= "C:/Users/Thomas/Documents/";

QString nome = "Banco_de_dados.txt";

cadastro::cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);
}

cadastro::~cadastro()
{
    delete ui;
}


void cadastro::on_btnCadastrar_clicked(){

    QFile arquivo(local+nome);
    if(!arquivo.open(QFile::Append|QFile::Text)){
        QMessageBox::warning(this,"ERRO", "Erro ao abrir no arquivo");
    }

    QTextStream saida(&arquivo);
    QString nnome = ui->txtNome->toPlainText();
    QString ccpf = ui->txtCpf->toPlainText();
    QString ttel = ui->txtTel->toPlainText();
    QString dtnasc = ui->dateNasci->date().toString();
    QString chin = ui->dateTimeChin->date().toString();
    QString chinT = ui->dateTimeChin->time().toString();
    QString chou = ui->dateTimeChout->date().toString();
    QString chouT = ui->dateTimeChout->time().toString();


    saida << nnome <<" "<< ccpf <<" "<< ttel <<" "<< dtnasc <<" "<< chin <<" "<< chinT <<" "<< chou<<" "<< chouT;

    arquivo.flush();
    arquivo.close();
    ui->txtNome->clear();
    ui->txtCpf->clear();
    ui->txtTel->clear();
    ui->dateNasci->clear();
    ui->dateTimeChin->clear();
    ui->dateTimeChout->clear();
}
