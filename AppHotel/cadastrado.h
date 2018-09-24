#ifndef CADASTRADO_H
#define CADASTRADO_H
#include <iostream.>
#include <string>

class Cadastrado{

    private:

        string Nome;
        int Cpf;
        int Telefone;
        int DataNasc;
        string CheckIn;
        string CheckOut;


    public:


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


};

#endif // CADASTRADO_H

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

string Cadastrado::getNome() const
{
    return Nome;
}

void Cadastrado::setNome(const string &value)
{
    Nome = value;
}
