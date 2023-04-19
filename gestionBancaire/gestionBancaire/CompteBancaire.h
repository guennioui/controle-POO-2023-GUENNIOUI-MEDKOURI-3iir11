#pragma once
#include <iostream>
using namespace std;

class CompteBancaire
{
protected:
	string numero;
	double solde;

public:

	//contructeur par defaut et d'initialisation
	CompteBancaire();
	CompteBancaire(string, double);

	//getters & setters
	string getNumero() const;
	double getSolde() const;
	void setNumero(string);
	void setSolde(double);

	//methode retirer montant
	bool retirer(double);

	//methode deposer montant
	bool deposer(double);

	//methode afficher informations du CompteBancaire
	void afficher() const;
};

