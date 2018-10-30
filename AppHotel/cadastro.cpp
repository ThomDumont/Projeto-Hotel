#include "cadastro.hpp"
#include "ui_cadastro.h"
#include <QMessageBox>


using namespace std;

static QFile *arquivo;
static QTextStream stream;

cadastro::cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);
    arquivo = new QFile("Banco de dados.txt");
    if(arquivo->open(QIODevice::ReadWrite|QIODevice::Append|QFile::Text)){
           stream.setDevice(arquivo);
    }else{
         QMessageBox::warning(this,"ERRO", "Erro ao abrir no arquivo");
    }
}

cadastro::~cadastro()
{
    delete ui;
}


void cadastro::on_btnCadastrar_clicked(){


    QString nnome = ui->txtNome->toPlainText();
    QString ccpf = ui->txtCpf->toPlainText();
    QString ttel = ui->txtTel->toPlainText();
    QString dtnasc = ui->dateNasci->date().toString();
    QString chin = ui->dateTimeChin->date().toString();
    QString chinT = ui->dateTimeChin->time().toString();
    QString chou = ui->dateTimeChout->date().toString();
    QString chouT = ui->dateTimeChout->time().toString();


    stream << nnome <<" "<< ccpf <<" "<< ttel <<" "<< dtnasc <<" "<< chin <<" "<< chinT <<" "<< chou<<" "<< chouT <<"  "<<endl;

    arquivo->flush();
    arquivo->close();
    ui->txtNome->clear();
    ui->txtCpf->clear();
    ui->txtTel->clear();
    ui->dateNasci->clear();
    ui->dateTimeChin->clear();
    ui->dateTimeChout->clear();
}
