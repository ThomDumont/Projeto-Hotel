#ifndef CADASTRADO_HPP
#define CADASTRADO_HPP
#include <string>
#include <iostream>
#include <QString>

class Cadastrado{

    public:

        QString Nome;
        QString Cpf;
        QString Telefon;
        QString DataNasc;
        QString CheckIn;
        QString CheckOut;


    public:

        Cadastrado(QString n){
            Cpf = n;
        }

        Cadastrado(QString n, QString c,QString t,QString dn, QString ci, QString co){
            Nome = n;
            Cpf = c;
            Telefon = t;
            DataNasc = dn;
            CheckIn = ci;
            CheckOut = co;
        }

        bool operator<=(Cadastrado n){
            if(Cpf <= n.Cpf){
                return true;
            }
            return false;
        }

        bool operator !=(Cadastrado n){
            if(Cpf != n.Cpf){
                return true;
            }
            return false;
        }

        bool operator <(Cadastrado n){
            if(Cpf < n.Cpf){
                return true;
            }
            return false;
        }

};

#endif // CADASTRADO_HPP
