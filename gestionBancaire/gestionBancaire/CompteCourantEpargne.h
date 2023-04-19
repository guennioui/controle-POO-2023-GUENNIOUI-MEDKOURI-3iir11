#pragma once
#include "CompteCourant.h"
#include "CompteEpargne.h"
#include <iostream>
using namespace std;

class CompteCourantEpargne : public CompteCourant, public CompteEpargne
{
public:

	//constructeur par defaut et d'initialisation
	CompteCourantEpargne();
	CompteCourantEpargne(string, double, double, double);

	//methode deposer
	bool deposer(double);

	//methode retirer
	bool retirer(double);

	//methode afficher
	void afficher() const;
};

