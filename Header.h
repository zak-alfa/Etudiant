#pragma once

using namespace std;

class Etudiant
{
private:
	int matricule;
	string nom;
	int nbrNotes;
	double *tabNotes;
	static int cpt;

public:
	Etudiant();
	Etudiant(string,int);
	Etudiant(const Etudiant &E);
	~Etudiant();
	string getNom();
	void setNom(const string &n);
	void saisie();
	void affichage();
	double moyenne();
	bool admis();
	bool comparer(Etudiant E);
};
