/*********************** PROJET CODER PAR LE BINOME : 3iir11 **********************/
/***********************          GUENNIOUI ABDALLAH         **********************/
/***********************          MEDKOURI ELMEHDI           **********************/

#include "pch.h"
#include "CompteBancaire.h"
#include "CompteCourant.h"
#include "CompteEpargne.h"
#include "CompteCourantEpargne.h"
#include "Banque.h"
#include <iostream>

using namespace std;

int main()
{
	//creation de la Banque
	Banque banque;

	cout << "****************** Les quatres types de comptes ****************************" << endl;
	//creation des differents types de comptes
	CompteBancaire* compteBancaire = new CompteBancaire("CB", 135000.59);
	CompteBancaire* compteCourant = new CompteCourant("CC", 93500.00, 1150.00);
	CompteBancaire* compteEpargne = new CompteEpargne("CE", 23500.00, 5.5);
	CompteBancaire* compteCourantEpargne = new CompteCourantEpargne("CCE", 340660.73, 2000.00, 6);

	//l'ajout des differents types de compte a la banque
	banque.ajouterCompte(compteBancaire);
	banque.ajouterCompte(compteCourant);
	banque.ajouterCompte(compteEpargne);
	banque.ajouterCompte(compteCourantEpargne);

	//depot d'argent
	compteBancaire->deposer(1000);
	compteCourant->deposer(1500);
	compteEpargne->deposer(2000);
	compteCourantEpargne->deposer(2500);

	//retrait d'argent
	compteBancaire->retirer(500);
	compteCourant->retirer(500);
	compteEpargne->retirer(500);
	compteCourantEpargne->retirer(500);

	//affichage des comptes et totales de la banque avant la suppression de quelque uns
	banque.afficherComptes();
	banque.getTotalSoldes();

	cout << "\n\n****************** Debut de la suppression ***************************************" << endl;
	//suppression des deux comptes
	//banque.supprimerCompte("CB");
	banque.supprimerCompte("CC");
	//banque.supprimerCompte("CE");
	banque.supprimerCompte("CCE");	

	cout << "\n\n****************** Apres suppression ***************************************" << endl;
	//affichage des comptes de la banque apres la suppression de quelque uns
	banque.afficherComptes();

	//affichage du total des soldes de l'ensemble des comptes de la banque
	banque.getTotalSoldes();


	cout << "\n\n****************** Fin Programme ***************************************\n" << endl;
	return 0;
}
