#include "pch.h"
#include "CompteCourant.h"

CompteCourant::CompteCourant():CompteBancaire()
{
	this->decouvertAutorise = 0.0;
}

CompteCourant::CompteCourant(string numero, double solde, double decouvertAutorise):CompteBancaire(numero, solde)
{
	this->decouvertAutorise = decouvertAutorise;
}

CompteCourant::~CompteCourant()
{
}

double CompteCourant::getDecouvertAutorise() const
{
	return this->decouvertAutorise;
}

void CompteCourant::setDecouvertAutorise(double decouvertAutorise)
{
	this->decouvertAutorise = decouvertAutorise;
}

bool CompteCourant::retirer(double montant)
{
	CompteBancaire::retirer(montant);
	if (montant > solde) {
		double var = montant - solde;
		if (var = decouvertAutorise) {
			this->decouvertAutorise = 0;
			this->solde = -var;
			return true;
		}
		else if (var < decouvertAutorise) {
			double diff = decouvertAutorise - var;
			this->decouvertAutorise = diff;
			this->solde = -diff;
			return true;
		}
		else {
			return false;
		}
	}
}

void CompteCourant::afficher() const
{
	CompteBancaire::afficher();
	cout << " ainsi qu'un decouvert autoriser egal a: " << this->decouvertAutorise;
}
