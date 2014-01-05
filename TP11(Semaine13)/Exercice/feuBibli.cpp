#include <iostream>
#include "biblio_livre.h"

/////////////////////////////////////////////////
// Procédure simulant un feu de bibliothèque
// Entrée : Rien
// Sortie : la bibliothèque sentant la fumée
////////////////////////////////////////////////

void feuBibli(t_biblio& bibli)
{
	int Alea(int, int);
	int nombre_brules;
	int i, j;
	nombre_brules = Alea(1, bibli.nbrLivres);

	for(i=0; i<nombre_brules; i++)
	{
		j = Alea(1, bibli.nbrLivres);

		bibli.livre[i].titre = bibli.livre[bibli.nbrLivres - 1].titre;
		bibli.livre[i].auteur = bibli.livre[bibli.nbrLivres - 1].auteur;
		bibli.livre[i].parution = bibli.livre[bibli.nbrLivres -1].parution;
		bibli.livre[i].nbrPages = bibli.livre[bibli.nbrLivres - 1].nbrPages;
                    
		bibli.nbrLivres = bibli.nbrLivres - 1;
	}

	cout << nombre_brules << " livres ont brûlé." << endl;
}
