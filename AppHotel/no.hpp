#include <iostream>
#ifndef NO_HPP
#define NO_HPP

template <typename T>
class Arv;

template <typename T>
class No{
	private:
		T Valor;
		No<T>* pai;
		No<T>* esq;
		No<T>* dir;
		No(T cont) : Valor(cont), pai(NULL),esq(NULL),dir(NULL){}

	public:
		T getValor(){
			return Valor;
		}


        friend class Arv<T>;
};


#endif
