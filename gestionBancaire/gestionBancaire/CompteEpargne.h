#pragma once
#include "CompteBancaire.h"
#include <iostream>
using namespace std;

class CompteEpargne : virtual public CompteBancaire
{
protected:
	double tauxInteret;

public:

	//constructeur par defaut et d'initialisation et destructeur
	CompteEpargne();
	CompteEpargne(string, double, double);
	~CompteEpargne();

	//getters & setters
	double getTauxInteret() const;
	void setTauxInteret(double);

	//methode deposer
	bool deposer(double);

	//methode afficher
	void afficher() const;
};

