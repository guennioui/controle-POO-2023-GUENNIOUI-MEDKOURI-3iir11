#pragma once
#include "CompteBancaire.h"
#include <iostream>
using namespace std;

class CompteCourant : virtual public CompteBancaire
{
protected:
	double decouvertAutorise;

public:
	//contructeur par defaut et d'initialisation
	CompteCourant();
	CompteCourant(string, double, double);

	//getters & setters
	double getDecouvertAutorise() const;
	void setDecouvertAutorise(double);

	//methode retirer un montant du CompteCourant
	bool retirer(double);

	//methode affcicher les informations du CompteCourant
	void afficher() const;
};

