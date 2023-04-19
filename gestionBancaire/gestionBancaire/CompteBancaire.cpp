#include "pch.h"
#include "CompteBancaire.h"

CompteBancaire::CompteBancaire()
{
	this->numero = "";
	this->solde = 0.0;
}

CompteBancaire::CompteBancaire(string numero, double solde)
{
	this->numero = numero;
	this->solde=solde;
}

string CompteBancaire::getNumero() const
{
	return this->numero;
}

double CompteBancaire::getSolde() const
{
	return this->solde;
}

void CompteBancaire::setNumero(string numero)
{
	this->numero = numero;
}

void CompteBancaire::setSolde(double solde)
{
	this->solde = solde;
}

bool CompteBancaire::retirer(double montant)
{
	if (this->solde - montant >= 0) {
		solde -= montant;
		return true;
	}
	else {
		return false;
	}

}

bool CompteBancaire::deposer(double montant)
{
	this->solde += montant;
	return true;
}

void CompteBancaire::afficher() const
{
	cout << "le compte: " << this->numero << " a le solde: " << this->solde;
}
