#ifndef CADASTRADO_HPP
#define CADASTRADO_HPP
#include <string>
#include <iostream>
using namespace std;



class Cadastrado{

    private:

        string Nome;
        int Cpf;
        int Telefone;
        int DataNasc;
        string CheckIn;
        string CheckOut;


    public:

        Cadastrado() : Nome(""), Cpf(0), Telefone(0), DataNasc(0), CheckIn(""), CheckOut(""){

        }

        string getNome() const;
        void setNome(const string &value);

        int getCpf() const;
        void setCpf(int value);

        int getDataNasc() const;
        void setDataNasc(int value);

        string getCheckIn() const;
        void setCheckIn(const string &value);

        string getCheckOut() const;
        void setCheckOut(const string &value);


        int getTelefone() const;
        void setTelefone(int value);
};

#endif // CADASTRADO_HPP

int Cadastrado::getCpf() const
{
    return Cpf;
}

void Cadastrado::setCpf(int value)
{
    Cpf = value;
}

int Cadastrado::getDataNasc() const
{
return DataNasc;
}

void Cadastrado::setDataNasc(int value)
{
DataNasc = value;
}

string Cadastrado::getCheckIn() const
{
return CheckIn;
}

void Cadastrado::setCheckIn(const string &value)
{
CheckIn = value;
}

string Cadastrado::getCheckOut() const
{
return CheckOut;
}

void Cadastrado::setCheckOut(const string &value)
{
CheckOut = value;
}

int Cadastrado::getTelefone() const
{
return Telefone;
}

void Cadastrado::setTelefone(int value)
{
Telefone = value;
}

string Cadastrado::getNome() const
{
    return Nome;
}

void Cadastrado::setNome(const string &value)
{
    Nome = value;
}
