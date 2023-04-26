#include "pch.h"
#include "CompteEpargne.h"

CompteEpargne::CompteEpargne() : CompteBancaire()
{
	this->tauxInteret = 0.0;
}

CompteEpargne::CompteEpargne(string numero, double solde, double tauxInteret):CompteBancaire(numero, solde)
{
	this->tauxInteret = tauxInteret;
}

CompteEpargne::~CompteEpargne()
{
}

double CompteEpargne::getTauxInteret() const
{
	return this->tauxInteret;
}

void CompteEpargne::setTauxInteret(double tauxInteret)
{
	this->tauxInteret = tauxInteret;
}

bool CompteEpargne::deposer(double montant)
{
	double var = montant * tauxInteret/100;
	this->solde += montant + var;
	return true;
}

void CompteEpargne::afficher() const
{
	CompteBancaire::afficher();
	cout << ", taux interet: " << this->tauxInteret;
}

