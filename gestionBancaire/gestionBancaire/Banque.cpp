#include "pch.h"
#include "Banque.h"

bool Banque::ajouterCompte(CompteBancaire* compte)
{
    this->comptesBancaires.push_back(compte);
    return true;
}

bool Banque::supprimerCompte(string numero)
{
    for (int i = 0; i < comptesBancaires.size(); i++) {
        if (comptesBancaires[i]->getNumero() == numero) {
            delete comptesBancaires[i];
            comptesBancaires.erase(comptesBancaires.begin() + i);
            return true;
        }
        else {
            return false;
        }
   }
    
    
    /* for (auto i = comptesBancaires.begin(); i != comptesBancaires.end(); ++i) {
        if ((*i)->getNumero() == numero) {
            delete* i;
            comptesBancaires.erase(i);
            break;
            return true;
        }
        else {
            return false;
        }
   }*/
}

void Banque::afficherComptes()
{
    for (const auto& cb : comptesBancaires) {
        cb->afficher();
        cout << endl;
    }
}

void Banque::getTotalSoldes()
{
    double totale = 0;
    for (int i = 0; i < comptesBancaires.size(); i++) {
        totale += comptesBancaires[i]->getSolde();
    }
    cout << "\nle totale des soldes de la banque est: " << totale <<" DHS" << endl;
}
