#ifndef CADASTRADO_HPP
#define CADASTRADO_HPP
#include <string>
#include <iostream>
#include <QString>

class Cadastrado{

    public:

        QString Nome;
        QString Cpf;
        QString CheckIn;
        QString CheckOut;


    public:

        Cadastrado(QString n, QString c, QString ci, QString co){
            Nome = n;
            Cpf = c;
            CheckIn = ci;
            CheckOut = co;
        }

        bool operator<=(Cadastrado n){
            if(Cpf <= n.Cpf){
                return true;
            }
            return false;
        }

};

#endif // CADASTRADO_HPP
