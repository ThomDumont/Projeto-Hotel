#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "menu.hpp"
#include "les.hpp"
#include "QString"
#include "qfile.h"
#include "qtextstream.h"
#include "qmessagebox.h"
#include "QStringList"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    v = LeLogins();
}

MainWindow::~MainWindow(){
    QFile *arquivo;
    QTextStream stream;

    arquivo = new QFile("Logins.txt");
    if(arquivo->open(QIODevice::WriteOnly|QFile::Text)){
           stream.setDevice(arquivo);
    }else{
         QMessageBox::warning(this,"ERRO", "Erro ao abrir no arquivo");
    }


    for(int i = 0;i<v.tamanho();i++){
        stream<<v.em(i)<<endl;
    }
    arquivo->close();

    delete ui;
}

void MainWindow::on_btnEntrar_clicked(){

    QString login = ui->txtLogin->toPlainText();
    QString senha = ui->txtSenha->toPlainText();
    QStringList nlogin = login.split(";");
    QStringList nsenha = senha.split(";");
    QString combina = login+";"+senha+";";

    QStringList w = combina.split(";");
    if(nlogin.size() == 1 && nsenha.size() == 1 &&
            nlogin.at(0) != "nlog" && nsenha.at(0) != "npass"){
        if(v.busca(combina)){
            hide();
            menu *x = new menu(this);
            x->show();
        }
        else{
            QMessageBox::warning(this,"Não Encontrado","Seu Login e Senha Podem estar errado");
        }
    }
    else if(nlogin.size() == 2 && nsenha.size() == 2 &&
            nlogin.at(0) == "nlog" && nsenha.at(0) == "npass"){
        QString q = nlogin.at(1)+";"+nsenha.at(1)+";";
        v.insere(q);
        QMessageBox::information(this,"Sucesso","Cadastro criado com sucesso!");
    }

}

LES<QString> MainWindow::LeLogins(){
    QFile arquivo("Logins.txt");
    if(arquivo.open(QFile::ReadOnly|QFile::Text)){
        //QMessageBox::warning(this,"ERRO","Erro ao abrir arquivo");
    }
    QTextStream entrada(&arquivo);

    LES<QString> ve;

    while (!entrada.atEnd()){
        QString nnome = entrada.readLine();
        ve.insere(nnome);
    }

    arquivo.close();
    return ve;
}
