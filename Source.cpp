#include<iostream>
#include<string>
#include"Header.h"

using namespace std;

Etudiant::Etudiant()
{
	this->matricule = 0;
	this->nom = "";
	this->nbrNotes = 0;
	this->tabNotes = new double[this->nbrNotes];
}

Etudiant::Etudiant(string name, int nb)
{
	this->cpt++;
	this->matricule = cpt;
	this->nom = name;
	this->nbrNotes = nb;
	this->tabNotes = new double[this->nbrNotes];
}

Etudiant::Etudiant(const Etudiant& E)
{
	int i;
	this->matricule = E.matricule;
	this->nom = E.nom;
	this->nbrNotes = E.nbrNotes;
	this->tabNotes = new double[this->nbrNotes];
	for (i = 0; i < this->nbrNotes; i++)
	{
		this->tabNotes[i] = E.tabNotes[i];
	}
}

Etudiant::~Etudiant()
{
	delete[]tabNotes;
}

string Etudiant::getNom()
{
	return this->nom;
}

void Etudiant::setNom(const string& n)
{
	this->nom = n;
}

void Etudiant::saisie()
{
	int i;
	cout << " - Saisie des notes :" << endl;
	for (i = 0; i < this->nbrNotes; i++)
	{
		cout << "Entrez la note " << i + 1 << " : ";
		cin >> this->tabNotes[i];
	}
}

void Etudiant::affichage()
{
	cout << "Matricule : " << this->matricule << endl;
	cout << "Nom de l'etudiant : " << this->nom << endl;
	cout << "Nombre de notes : " << this->nbrNotes << endl;
	cout << "Notes : " << endl;
	for (int i = 0; i < this->nbrNotes; i++)
	{
		cout << this->tabNotes[i] << "\t";
	}
	cout << endl;
}

double Etudiant::moyenne()
{
	double s = 0;
	for (int i = 0; i < this->nbrNotes; i++)
	{
		s += this->tabNotes[i];
	}
	return s / this->nbrNotes;
}

bool Etudiant::admis()
{
	if (this->moyenne() >= 10)
	{
		return true;
	}
	else {
		return false;
	}
}

bool Etudiant::comparer(Etudiant E)
{
	return(this->moyenne() == E.moyenne());
}
