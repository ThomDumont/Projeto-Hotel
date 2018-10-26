#include "cadastro.hpp"
#include "ui_cadastro.h"
#include <QFile>
#include <QTextStream>
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
    QString nnome = ui->txtNome->toPlainText();
    QString ccpf = ui->txtCpf->toPlainText();
    QString ttel = ui->txtTel->toPlainText();
    int dtnasc = ui->lblDatanasci->margin();
    int chin = ui->lblChin->margin();
    int chou = ui->lblChout->margin();

    saida << nnome<< ccpf << ttel << dtnasc << chin << chou;

    arquivo.flush();
    arquivo.close();

}
