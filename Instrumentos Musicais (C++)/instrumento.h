#ifndef _INSTRUMENTO_H_
#define _INSTRUMENTO_H_

#include <vector>
#include <iostream>

class instrumento
{
public:
	instrumento();
	virtual ~instrumento();
	virtual void play (char)=0;
	virtual void ajusta()=0;
	virtual bool verifica()=0;
	virtual void play(char*, int);
	virtual void afina();
};

class InstSopro:public instrumento
{
public:
	InstSopro();
	~InstSopro();
};

class InstPercussao:public instrumento
{
public:
	InstPercussao();
	~InstPercussao();
};

class InstCorda:public instrumento
{
public:
	InstCorda();
	~InstCorda();
};

class flauta:public InstSopro
{
public:
	flauta() { afinado=false; };  
	~flauta();
	void play (char);
	void ajusta();
	bool verifica();

private:
	bool afinado;
};

class fagote:public InstSopro
{
public:
	fagote() { afinado=false; };
	~fagote();
	void play (char);
	void ajusta();
	bool verifica();

private:
	bool afinado;
};

class violino:public InstCorda
{
public:
	violino() { afinado=false; };
	~violino();
	void play (char);
	void ajusta();
	bool verifica();

private:
	bool afinado;
};

class baixo:public InstCorda
{
public:
	baixo() { afinado=false; };
	~baixo();
	void play (char);
	void ajusta();
	bool verifica();

private:
	bool afinado;
};

class triangulo:public InstPercussao
{
public:
	triangulo() { afinado=false; };
	~triangulo();
	void play (char);
	void ajusta();
	bool verifica();

private:
	bool afinado;
};

class tambor:public InstPercussao
{
public:
	tambor() { afinado=false; };
	~tambor();
	void play (char);
	void ajusta();
	bool verifica();

private:
	bool afinado;
};

class container 
{
public:
	container();
	~container();
	void afinaTodos();
	void notaTodos(char);
	void musicaTodos(char*, int);
	void adicionaInstr(instrumento*);
	void afina(int indice);
	void nota(char nota, int indice);
	void musica(char* mus, int tam, int indice);
	void revelaNome();
private:
	std::vector<instrumento*> M;
};

#endif