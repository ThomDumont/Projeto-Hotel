#include "cadastro.hpp"
#include "ui_cadastro.h"
#include <QFile>
#include <QTextStream>
#include <QDataStream>
#include <QDateEdit>
#include <QMessageBox>

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

void cadastro::on_btnCadastrar_clicked()
{
    QFile arquivo(local+nome);
    if(!arquivo.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"ERRO", "Erro ao abrir no arquivo");
    }
    QTextStream saida(&arquivo);
    QDataStream saidadate(&arquivo);
    QString nnome = ui->txtNome->toPlainText();
    QString ccpf = ui->txtCpf->toPlainText();
    QString ttel = ui->txtTel->toPlainText();
    QDate dtnasc = ui->dateNasci->date();
    QDate chin = ui->dateTimeChin->date();
    QDate chou = ui->dateTimeChout->date() ;

    saida << nnome<< ccpf << ttel;
    saidadate << dtnasc << chin << chou;

    arquivo.flush();
    arquivo.close();

}
