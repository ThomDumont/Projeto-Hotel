#include <iostream>
#ifndef FILAC_HPP
#define FILAC_HPP
#define MAX 10

template <typename T>

class FilaC{
    private:
        T V[MAX+1];
        int i;
        int f;

    public:
    FilaC() : i(0), f(0){
    }

    bool enfileira(T conteudo){
        if(i == ((f+1)%(MAX+1))){
            return false;
        };
        V[f] = conteudo;
        f=((f+1)%(MAX+1));
        return true;
    }

    bool desenfileira( T* erro = nullptr ){
        if(i == f){
            return false;
        }
        if(erro){
            *erro = V[i];
        }
        i = ((i+1)%(MAX+1));
        return true;
    }

    void imprime(){
        int c = i;
        int t = f;
        while(c!=t){
            std::cout<<V[c]<<" ";
            c = ((c+1)%(MAX+1));
        }
        std::cout<<std::endl;
    }

    int tamanho(){
        return MAX+1;
    }

    int at(int i){
        return V[i];
    }

    int getF() const;
    void setF(int value);
    int getI() const;
    void setI(int value);
};

#endif // FILAC_HPP

template <typename T>

int FilaC<T>::getI() const
{
    return i;
}

template <typename T>

void FilaC<T>::setI(int value)
{
    i = value;
}

template <typename T>

int FilaC<T>::getF() const
{
    return f;
}

template <typename T>

void FilaC<T>::setF(int value)
{
    f = value;
}
