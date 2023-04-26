#pragma once
#include "CompteBancaire.h"
#include <vector>
#include <iostream>
using namespace std;

class Banque
{
private:
	vector<CompteBancaire*> comptesBancaires;

public:

	//methode ajouter compte Bancaire a la banque
	bool ajouterCompte(CompteBancaire*);

	//methode qui permet de supprimer un compte bancaire
	bool supprimerCompte(string);

	//methode qui permet d'afficher les comptes de la banque
	void afficherComptes();

	//methode getTotalSoldes() retourne le solde total des comptes geres par la banque
	void getTotalSoldes();

};

