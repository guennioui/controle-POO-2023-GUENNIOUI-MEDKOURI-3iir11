#pragma once
#include <iostream>
using namespace std;

class CompteBancaire
{
protected:
	string numero;
	double solde;

public:

	//contructeur par defaut et d'initialisation et destructeur
	CompteBancaire();
	CompteBancaire(string, double);
	virtual ~CompteBancaire();

	//getters & setters
	string getNumero() const;
	double getSolde() const;
	void setNumero(string);
	void setSolde(double);

	//methode retirer montant
	bool retirer(double);

	//methode deposer montant
	virtual bool deposer(double);

	//methode afficher informations du CompteBancaire
	virtual void afficher() const;
};

