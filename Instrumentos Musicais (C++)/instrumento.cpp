#include "instrumento.h"
#include <windows.h>
#include <iostream>
#include <typeinfo.h>
/*--------------------------------------------------------------------------*/
instrumento::instrumento()
{
}


instrumento::~instrumento()
{
}

void instrumento::play(char* Musica, int size)
{
	for (int i=0; i<size; ++i) play(Musica[i]);
}

void instrumento::afina()
{
	if (!verifica()) ajusta();
}
/*--------------------------------------------------------------------------*/
InstSopro::InstSopro()
{
}

InstSopro::~InstSopro()
{
}

InstPercussao::InstPercussao()
{
}

InstPercussao::~InstPercussao()
{
}

InstCorda::InstCorda()
{
}

InstCorda::~InstCorda()
{
}
/*--------------------------------------------------------------------------*/
void flauta::play (char Nota)
{
	if (Nota=='C') Beep((DWORD)261.63, 200); //C dó
	else if (Nota=='D') Beep((DWORD)293.66, 200); //D ré
	else if (Nota=='E') Beep((DWORD)329.63, 200); //E mi
	else if (Nota=='F') Beep((DWORD)349.23, 200); //F fá
	else if (Nota=='G') Beep((DWORD)392.00, 200); //G sol
	else if (Nota=='A') Beep((DWORD)440.00, 200); //A la
	else if (Nota=='B') Beep((DWORD)493.88, 200); //B si
	else return;
}

void flauta::ajusta()
{
	afinado = true;
	std::cout << "Flauta afinada com sucesso." << std::endl;
}

bool flauta::verifica()
{
	if (afinado) std:: cout << "Flauta esta afinada." << std::endl;
	else std::cout << "Flauta esta desafinada." << std::endl;
	return afinado;
}

flauta::~flauta()
{
}
/*--------------------------------------------------------------------------*/
void fagote::play (char Nota)
{
	if (Nota=='C') Beep((DWORD)301.63, 200); //C dó
	else if (Nota=='D') Beep((DWORD)313.66, 200); //D ré
	else if (Nota=='E') Beep((DWORD)349.63, 200); //E mi
	else if (Nota=='F') Beep((DWORD)369.23, 200); //F fá
	else if (Nota=='G') Beep((DWORD)412.00, 200); //G sol
	else if (Nota=='A') Beep((DWORD)460.00, 200); //A la
	else if (Nota=='B') Beep((DWORD)513.88, 200); //B si
	else return;
}

void fagote::ajusta()
{
	afinado = true;
	std::cout << "Fagote afinado com sucesso." << std::endl;
}

bool fagote::verifica()
{
	if (afinado) std:: cout << "Fagote esta afinado." << std::endl;
	else std::cout << "Fagote esta desafinado." << std::endl;
	return afinado;
}

fagote::~fagote()
{
}
/*--------------------------------------------------------------------------*/
void violino::play (char Nota)
{
	if (Nota=='C') Beep((DWORD)461.63, 200); //C dó
	else if (Nota=='D') Beep((DWORD)493.66, 200); //D ré
	else if (Nota=='E') Beep((DWORD)529.63, 200); //E mi
	else if (Nota=='F') Beep((DWORD)549.23, 200); //F fá
	else if (Nota=='G') Beep((DWORD)592.00, 200); //G sol
	else if (Nota=='A') Beep((DWORD)640.00, 200); //A la
	else if (Nota=='B') Beep((DWORD)693.88, 200); //B si
	else return;
}

void violino::ajusta()
{
	afinado = true;
	std::cout << "Violino afinado com sucesso." << std::endl;
}

bool violino::verifica()
{
	if (afinado) std:: cout << "Violino esta afinado." << std::endl;
	else std::cout << "Violino esta desafinado." << std::endl;
	return afinado;
}

violino::~violino()
{
}
/*--------------------------------------------------------------------------*/
void baixo::play (char Nota)
{
	if (Nota=='C') Beep((DWORD)161.63, 200); //C dó
	else if (Nota=='D') Beep((DWORD)193.66, 200); //D ré
	else if (Nota=='E') Beep((DWORD)229.63, 200); //E mi
	else if (Nota=='F') Beep((DWORD)249.23, 200); //F fá
	else if (Nota=='G') Beep((DWORD)292.00, 200); //G sol
	else if (Nota=='A') Beep((DWORD)340.00, 200); //A la
	else if (Nota=='B') Beep((DWORD)393.88, 200); //B si
	else return;
}

void baixo::ajusta()
{
	afinado = true;
	std::cout << "Baixo afinado com sucesso." << std::endl;
}

bool baixo::verifica()
{
	if (afinado) std:: cout << "Baixo esta afinado." << std::endl;
	else std::cout << "Baixo esta desafinado." << std::endl;
	return afinado;
}

baixo::~baixo()
{
}
/*--------------------------------------------------------------------------*/
void triangulo::play (char Nota)
{
	if (Nota=='C') Beep((DWORD)561.63, 200); //C dó
	else if (Nota=='D') Beep((DWORD)593.66, 200); //D ré
	else if (Nota=='E') Beep((DWORD)629.63, 200); //E mi
	else if (Nota=='F') Beep((DWORD)649.23, 200); //F fá
	else if (Nota=='G') Beep((DWORD)692.00, 200); //G sol
	else if (Nota=='A') Beep((DWORD)740.00, 200); //A la
	else if (Nota=='B') Beep((DWORD)793.88, 200); //B si
	else return;
}

void triangulo::ajusta()
{
	afinado = true;
	std::cout << "Triangulo afinado com sucesso." << std::endl;
}

bool triangulo::verifica()
{
	if (afinado) std:: cout << "Triangulo esta afinado." << std::endl;
	else std::cout << "Triangulo esta desafinado." << std::endl;
	return afinado;
}

triangulo::~triangulo()
{
}
/*--------------------------------------------------------------------------*/
void tambor::play (char Nota)
{
	if (Nota=='C') Beep((DWORD)861.63, 200); //C dó
	else if (Nota=='D') Beep((DWORD)893.66, 200); //D ré
	else if (Nota=='E') Beep((DWORD)929.63, 200); //E mi
	else if (Nota=='F') Beep((DWORD)949.23, 200); //F fá
	else if (Nota=='G') Beep((DWORD)992.00, 200); //G sol
	else if (Nota=='A') Beep((DWORD)1040.00, 200); //A la
	else if (Nota=='B') Beep((DWORD)1093.88, 200); //B si
	else return;
}

void tambor::ajusta()
{
	afinado = true;
	std::cout << "Tambor afinado com sucesso." << std::endl;
}

bool tambor::verifica()
{
	if (afinado) std:: cout << "Tambor esta afinado." << std::endl;
	else std::cout << "Tambor esta desafinado." << std::endl;
	return afinado;
}

tambor::~tambor()
{
}
/*--------------------------------------------------------------------------*/
container::container()
{
}

container::~container()
{
	while(!M.empty()) delete M.back(), M.pop_back();
}

void container::afinaTodos()
{
	for (int i=0; i<M.size(); ++i) M[i]->afina();
}

void container::notaTodos(char nota)
{
	for (int i=0; i<M.size(); ++i) M[i]->play(nota);
}

void container::musicaTodos(char* mus, int tam)
{
	for (int i=0; i<M.size(); ++i) M[i]->play(mus, tam);
}

void container::afina(int indice)
{
	M[indice]->afina();
}

void container::nota(char nota, int indice)
{
	M[indice]->play(nota);
}

void container::musica(char* mus, int tam, int indice)
{
	M[indice]->play(mus, tam);
}

void container::adicionaInstr(instrumento* J)
{
	M.push_back(J);
}

void container::revelaNome()
{
	for (int i=0;i<M.size();++i)
		std::cout << i+1 << ") " << typeid(*M[i]).name() << std::endl;
}
/*--------------------------------------------------------------------------*/
