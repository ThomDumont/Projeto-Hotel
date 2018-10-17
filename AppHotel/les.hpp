#ifndef LES_HPP
#define LES_HPP

#include <iostream>
#define MAX 100
using namespace std;


template <typename T>

class LES {
    private:
        int n;
        T ve[MAX];
    public:
        LES() : n(0){}

        bool insere(T valor){

            if(n == MAX){
                return false;
            }

            int i = 0;
            for(i;i<n && ve[i] < valor;i++){
            }
            for(int j = n; j>i; j--){
                ve[j] = ve[j-1];
            }

            ve[i] = valor;

            n++;
            return true;
        }

        int busca(T valor){
            int i = 0;

            while(i != n && ve[i]!=valor){
                i++;
            }

            if(i==n){
                ;
            }
            else{
                return i;
            }

        }

        bool remove(T valor){

            int x = this->busca(valor);
            if(x == n){
                return false;
            }
            else{
                int i;
                for(i=x;i<n;i++){
                ve[i] = ve[i+1];
                }
                n--;
            }

            return true;
        }

        int tamanho(){
            return n;
        }

        void imprime(){
            int i;
            for(i=0;i<n;i++){
                cout<<ve[i]<<" ";
            }
            cout<<endl;
        }

};

#endif // LES_HPP
