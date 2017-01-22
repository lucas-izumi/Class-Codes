#include "stdafx.h"
#include "ListaDuplamenteEncadeada.h"
#include <iostream>

Lista :: Lista()
{     
    inicio = 0;
    fim = 0;
    tamanho = 0;
}

Lista :: ~Lista()
{     
    No* aux;
    while(inicio){
          aux=inicio;
          inicio = inicio->proximo;
          delete aux;
    }
}

bool Lista :: vazia()
{
    return tamanho == 0;
}

bool Lista :: inserir(int x){
	
	No* aux = new No;
	aux->proximo = 0;
	aux->anterior = 0;
	aux->valor = x;

	if(vazia()){
		inicio = fim = aux;
		tamanho++;
		return true;
	}
	
	if (tamanho==1){
	if (aux->valor < inicio->valor) inicio=aux;	
	else fim=aux;
	
	fim->anterior = inicio;
	inicio->proximo = fim;
	tamanho++;
		return true;
	}

	No* a=inicio;


	if (aux->valor < a->valor){
			inicio->anterior = aux;
			aux->proximo=inicio;
			inicio=aux;
			tamanho++;
			return true;
			}
	
	a=fim;
	if (aux->valor > a->valor){
			aux->anterior = fim;
			fim->proximo=aux;
			fim=aux;
tamanho++;
			return true;
			}
	

	a=inicio;
	No* p=inicio->proximo;
	while (a){
		if (aux->valor > a->valor && aux->valor < p->valor){
			aux->anterior=a;
			aux->proximo=p;
			a->proximo=aux;
			p->anterior=aux;
			tamanho++;
			return true;
			}
		a=p;
		p=p->proximo;
	
	}
	
}

bool Lista :: remover_posicao(int &x, int posicao)
{ 
    
    if(tamanho == 1 ){
        x = inicio->valor;
        delete inicio;
        inicio = fim =0;
        tamanho = 0;
        return true;
    }

    
    if(posicao == 0){
        x = inicio->valor;
        No* aux = inicio;
        inicio->proximo->anterior = 0;
        inicio = inicio->proximo;
        delete aux;
        --tamanho;
        return true;
    }
    
    
    if(posicao == tamanho){
        x = fim->valor;
        No* aux = fim;
        fim->anterior->proximo = 0;
        fim = fim->anterior;
        delete aux;
        --tamanho;
        return true;
    }
    
    
    No* p = inicio;
    for(int i=1 ; i<posicao ; ++i)
        p = p->proximo;
    No* aux = p->proximo;
    x = aux->valor;
    p->proximo = aux->proximo;
    aux->proximo->anterior = p;
    delete aux;
    --tamanho;
    return true;
    
}

void Lista :: print() 
{ 
    No* p = inicio;
    while(p){
        cout<< p->valor <<" - ";
        p = p->proximo;
    
}
	cout << endl;
}

void Lista :: printR() 
{ 
    No* p = fim;
    while(p){
        cout<< p->valor <<" - ";
        p = p->anterior;
    }
	cout << endl;
}


bool Lista :: remover(int x)
{ 
	No* aux=inicio;
	int cont=0;
	while (aux) { 
		if (aux->valor == x) cont++;
		aux=aux->proximo;		
	}    
	if (cont==0) {
		cout <<"Elemento nao existente na lista" << endl; 
		return false;
	}
	aux = inicio;
	
	if(tamanho == 1){
		delete inicio;
		inicio = fim = 0;
		tamanho--;
		return true;
	}
	/*inicio elemento*/
	if (aux->valor==x){	
		inicio = inicio->proximo;
		inicio->anterior=0;
		delete aux;
		tamanho--;
		return true;	
	}

	aux=fim;
	if (aux->valor==x){	
		fim = fim->anterior;
		fim->proximo=0;
		delete aux;
		tamanho--;
		return true;	
	}
	aux=inicio;
	
	
	while (aux->valor != x)aux=aux->proximo;
	
No* a=aux->anterior;
	No* p=aux->proximo;
	a->proximo=p;
	p->anterior=a;
	delete aux;
tamanho--;
	return true;
}

void Lista :: merge(Lista &lista)
{
	No* p = lista.inicio;
	int v;
	while (p)
	{
		inserir(p->valor);
		v = p->valor;
		p = p->proximo;
		lista.remover(v) ;		
	}

}

