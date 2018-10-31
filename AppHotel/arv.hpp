#include <iostream>
#include "no.hpp"
#ifndef ARV_HPP
#define ARV_HPP
#define Max(a,b) (((a>b) ? (a) : (b)))

using namespace std;

template <typename T>
class Arv{
    protected:

		No<T>* raiz;
		int nrs;
		void erd(No<T>* r){
			if(r){
				erd(r->esq);
				cout<<r->Valor<<endl;
				erd(r->dir);
			}
		}

		void red(No<T>* r){
			if(r){
                cout<<r->Valor<<endl;
				red(r->esq);
				red(r->dir);
			}
		}



	public:


		Arv() : raiz(NULL), nrs(0){}

		int nFilhos(No<T>* atual){
			int w = 0;
			if(atual->esq){
				w++;
			}
			if(atual->dir){
				w++;
			}
            return w;
		}

		No<T>* antecessor(No<T>* n){
			
			No<T>* atual = n;
			
			atual = atual->esq;
			
			while(atual->dir) {
				atual = atual->dir;
				cout<<atual->Valor<<endl;
			}
			
			//cout<<atual->Valor<<endl;
			return atual;
		}

		No<T>** achaPai(No<T>* filho){
			No<T>* pai = filho->pai;
			if(pai->dir == filho){
				return &(pai->dir);
			}
			else{
				return &(pai->esq);
			}
        }

		bool insere(T cont){

			No<T>* n = new No<T>(cont);
			if(!n){
				return false;
			}

			No<T>* atual = raiz;
			No<T>* ante = NULL;

			while(atual){
				ante = atual;
				if(cont <= atual->Valor ){
					atual = atual->esq;
				}
				else{
					atual = atual->dir;
				}
			}

			n->pai = ante;

			if(!ante){
				raiz = n;
			}
			else{
				if(cont <= ante->Valor){
					ante->esq = n;
				}
				else{
					ante->dir = n;
				}
			}
			nrs++;

			//cout<<"inserindo e balanceando o "<<cont<<endl;
			balanceie(n);
			return true;
		}

		void erd(){
			erd(raiz);
		}
		void red(){
			red(raiz);
		}

		No<T>* Busca(T valor){
			No<T>* atual = raiz;
			No<T>* ante = NULL;

			while(atual){
				ante = atual;
				if(atual->Valor != valor){
					if(valor < atual->Valor ){
						atual = atual->esq;
					}
					else{
						atual = atual->dir;
					}
				}
				else{
					break;
				}
			}
			return ante;
		}

		int altura(No<T>* n){
			if(n==NULL){
				return -1;
			}
			return Max(altura(n->esq), altura(n->dir))+1;
		}

		int fb(No<T>* n){
			return (altura(n->dir) - altura(n->esq));
		}

		void right(No<T>* atual){
			//cout<<"rodando direita"<<endl;
			No<T>* x = atual;
			No<T>* y = x->esq;
			No<T>* b = y->dir;
			No<T>* pai = x->pai;

			if(!pai){
				raiz = y;
			}

			y->pai = pai;
			y->dir = x;
			x->pai = y;
			x->esq = b;

			if(b){
				b->pai = x;
			}

			if(pai && pai->esq == x){
				pai->esq = y;
			}
			else if(pai && pai->dir == x){
				pai->dir = y;
			}
		}

		void left(No<T>* atual){
            //cout<<"rodando esquerda"<<endl;
			No<T>* x = atual;
			No<T>* y = x->dir;
			No<T>* b = y->esq;
			No<T>* pai = x->pai;

			if(!pai){
				raiz = y;
			}

			y->pai = pai;
			x->pai = y;
			x->dir = b;
			y->esq = x;

			if(b){
				b->pai = x;
			}

			if(pai && pai->dir == x){
				pai->dir = y;
			}
			else if(pai && pai->esq == x){
				pai->esq = y;
			}
		}

		void remove (No<T>* atual){
			int f = nFilhos(atual);
			//cout<<f<<endl;
			if(f == 0){
				
				*achaPai(atual) = NULL;
				if(atual->pai){
					balanceie(atual->pai);
				}
				delete atual;
				
			}
			else if(f == 1){
				
				No<T>* filho = atual->esq;
				if(!filho){
					filho = atual->dir;
				}
				*achaPai(atual) = filho;
				filho->pai = atual->pai;
				if(filho->pai){
					balanceie(filho->pai);
				}
				
				delete atual;
			}
			else{
				No<T>* antes = antecessor(atual);
				
				atual->Valor = antes->Valor;
				No<T>* pAntes = antes->pai;
				remove(antes);
				balanceie(pAntes);
			}

		}


		void balanceie(No<T>* n){

			while(n){
				if(fb(n) >= 2){

					if(fb(n->dir)<0){
						right(n->dir);
					}
					left(n);
				}
				else if(fb(n) <= -2){

					if(fb(n->esq)>0){
						left(n->esq);
					}
					right(n);

				}

				n = n->pai;
			}
		}

		No<T>* getRaiz(){
			return raiz;
		}

};


#endif
