#ifndef _listaduplamenteencadeada_h_
#define _listaduplamenteencadeada_h_
#include <iostream>
using namespace std;

class Lista {
struct No{
        
        No* proximo;
        No* anterior;
        int valor;
};

private:
        No* inicio;
        No* fim;
        
public:
        Lista();
        ~Lista();
		int tamanho;
        bool vazia();
        bool inserir(int x);
        bool remover_posicao(int &x,int posicao);
		bool remover(int x);
        void print(); 
		void printR();
		void merge(Lista& lista);
   
		
};

#endif