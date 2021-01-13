#include<iostream>
#include<string>
#include"Header.h"

using namespace std;
int Etudiant::cpt= 0;

int main()
{
	Etudiant E("Zack",2);
	E.saisie();
	E.affichage();
	E.moyenne();
	E.admis();
	string x = E.getNom();
	if (E.admis())
	{
		cout << "L'etudiant "<<x<<" est admis.\n" << endl;
		
	}
	else {
		cout << "Letudiant "<<x<<" n'est pas admis.\n" << endl;
	}
	Etudiant E2("Hamid", 2);
	E2.saisie();
	E2.affichage();
	E2.moyenne();
	if (E.comparer(E2))
	{
		cout << "E et E2 ont la meme moyenne." << endl;
	}
	else {
		cout << "E et E2 n'ont pas la meme moyenne." << endl;

	}


	




	return 0;
}