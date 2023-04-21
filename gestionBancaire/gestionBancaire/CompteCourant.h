#pragma once
#include "CompteBancaire.h"
#include <iostream>
using namespace std;

class CompteCourant : virtual public CompteBancaire
{
protected:
	double decouvertAutorise;

public:
	//contructeur par defaut et d'initialisation et destructeur
	CompteCourant();
	CompteCourant(string, double, double);
	virtual ~CompteCourant();

	//getters & setters
	double getDecouvertAutorise() const;
	void setDecouvertAutorise(double);

	//methode retirer un montant du CompteCourant
	bool retirer(double);

	//methode affcicher les informations du CompteCourant
	void afficher() const;
};

