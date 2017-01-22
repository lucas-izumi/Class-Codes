#include <iostream>
#include <vector>
#include "instrumento.h"
using namespace std;

int main ()
{
	container C;
	instrumento *p;
	int num, mus;
	char nota;
	char music[]="D,D,E,D,G,F,D,D,E,D,A,G,D,D,D,B,G,F,E,C,C,B,G,A,G"; 
	char music2[]="B,B,B,B,B,B,B,D,G,A,B,C,C,C,C,C,B,B,B,B,A,A,B,B,A,D";
	
	cout << "Escolha um instrumento:\n1)Violino\n2)Baixo\n3)Flauta\n4)Fagote\n5)Triangulo\n6)Tambor" << endl;
	cin >> num;
	
	if
		(num==1) { p = new violino; C.adicionaInstr(p); }
	else if
		(num==2) { p = new baixo; C.adicionaInstr(p); }
	else if
		(num==3) { p = new flauta; C.adicionaInstr(p); }
	else if
		(num==4) { p = new fagote; C.adicionaInstr(p); }
	else if
		(num==5) { p = new triangulo; C.adicionaInstr(p); }
	else if
		(num==6) { p = new tambor; C.adicionaInstr(p); }

	while (1)
	{
		cout << "O que deseja fazer?\n1)Escolher mais um instrumento\n2)Tocar uma nota\n3)Tocar uma musica\n4)Afinar um instrumento" <<
		"\n5)Afinar todos os instrumentos\n6)Tocar uma nota com todos os instrumentos\n7)Tocar uma musica com todos os instrumentos\n8) Sair" << endl;
		cin >> num;

		if (num==1)
		{
			cout << "Escolha um instrumento:\n1)Violino\n2)Baixo\n3)Flauta\n4)Fagote\n5)Triangulo\n6)Tambor" << endl;
			cin >> num;
	
			if
				(num==1) { p = new violino; C.adicionaInstr(p); }
			else if
				(num==2) { p = new baixo; C.adicionaInstr(p); }
			else if
				(num==3) { p = new flauta; C.adicionaInstr(p); }
			else if
				(num==4) { p = new fagote; C.adicionaInstr(p); }
			else if
				(num==5) { p = new triangulo; C.adicionaInstr(p); }
			else if
				(num==6) { p = new tambor; C.adicionaInstr(p); }
		}

		else if (num==2)
		{
			cout << "Escolha o instrumento que deseja tocar a nota." << endl;
			C.revelaNome();
			cin >> num;
			cout << "Escolha a nota a ser tocada: C, D, E, F, G, A, B" << endl;
			cin >> nota;
			C.nota(nota,num-1);
		}

		else if (num==3)
		{
			cout << "Escolha o instrumento que deseja tocar a musica."<< endl;
			C.revelaNome();
			cin >> num;
			cout << "Escolha a musica a ser tocada:\n1) Musica 1\n2) Musica 2" << endl;
			cin >> mus;
			if (mus==1) C.musica(music,25,num-1);
			else if (mus==2) C.musica(music2,26,num-1);
		}

		else if (num==4)
		{
			cout << "Escolha o instrumento que deseja afinar." << endl;
			C.revelaNome();
			cin >> num;
			C.afina(num-1);
		}

		else if (num==5) C.afinaTodos();
		
		else if (num==6) 
		{
			cout << "Escolha a nota a ser tocada: C, D, E, F, G, A, B" << endl;
			cin >> nota;
			C.notaTodos(nota);
		}

		else if (num==7)
		{
			cout << "Escolha a musica a ser tocada:\n1) Musica 1\n2) Musica 2" << endl;
			cin >> mus;
			if (mus==1) C.musicaTodos(music,25);
			else if (mus==2) C.musicaTodos(music2,26);
		}

		else if (num==8) break;
		else cout << "Opcao invalida" << endl;
	}

	system("PAUSE");
	return 0;
}