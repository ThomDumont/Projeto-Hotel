#include <iostream>
#ifndef FILAC_HPP
#define FILAC_HPP
#define MAX 10

template <typename T>

class FilaC{
    private:
        T V[MAX+1];
        int f;
        int i;

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

};

#endif // FILAC_HPP
