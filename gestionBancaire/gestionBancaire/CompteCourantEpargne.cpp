#include "pch.h"
#include "CompteCourantEpargne.h"

CompteCourantEpargne::CompteCourantEpargne():CompteCourant(),CompteEpargne()
{
}

CompteCourantEpargne::CompteCourantEpargne(string numero, double solde, double decouvertAutorise, double tauxInteret):CompteBancaire(numero, solde), CompteCourant(numero, solde, decouvertAutorise), CompteEpargne(numero, solde, tauxInteret) {}

CompteCourantEpargne::~CompteCourantEpargne()
{
}

bool CompteCourantEpargne::deposer(double montant)
{
	CompteCourant::deposer(montant);
	CompteEpargne::deposer(montant);

	if (CompteCourant::deposer(montant) == true || CompteCourant::deposer(montant) == false
		&& CompteEpargne::deposer(montant) == true || CompteEpargne::deposer(montant) == false) {
		return true;
	}
	else {
		return false;
	}
}

bool CompteCourantEpargne::retirer(double montant)
{
	CompteCourant::retirer(montant);
	CompteEpargne::retirer(montant);

	if (CompteCourant::retirer(montant) == true || CompteCourant::retirer(montant) == false
		&& CompteEpargne::retirer(montant) == true || CompteEpargne::retirer(montant) == false) {
		return true;
	}
	else {
		return false;
	}
}

void CompteCourantEpargne::afficher() const
{
	CompteEpargne::afficher();
}


