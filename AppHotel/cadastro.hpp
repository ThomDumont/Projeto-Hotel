#ifndef CADASTRO_HPP
#define CADASTRO_HPP
#include <QDialog>
#include <QtCore>
#include <arv.hpp>
#include <cadastrado.hpp>

namespace Ui {
class cadastro;
}

class cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit cadastro(QWidget *parent = nullptr);
    ~cadastro();
    Arv<Cadastrado> LeArv();
    //void red(Arv<Cadastrado> r);
    void redw(No<Cadastrado>* r);


private slots:
    void on_btnCadastrar_clicked();

private:
    Ui::cadastro *ui;
    Arv<Cadastrado> v;

};

#endif // CADASTRO_HPP
