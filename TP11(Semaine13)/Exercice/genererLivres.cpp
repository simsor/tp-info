#include <iostream>
#include <string>
#include "biblio_livre.h"

///////////////////////////////////////////
// Procédure permettant de générer un nombre
// de livres aléatoires.
// Entrée : le nombre de livres à générer
// Sortie : la bibliothèque
//////////////////////////////////////////

void genererLivres(int nbr, t_biblio &bibli)
{
	int i;
	string titre, auteur;
	int annee, pages;
	int Alea(int, int);
	string genererTitre();
	string genererAuteur();

	for (i = 0; i < nbr; i++)
	{
		titre = genererTitre();
		auteur = genererAuteur();
		annee = Alea(-500, 2013);
		pages = Alea(200, 1000);
		if (bibli.nbrLivres < 500)
		{
			bibli.livre[bibli.nbrLivres].titre    = titre;
			bibli.livre[bibli.nbrLivres].auteur   = auteur;
			bibli.livre[bibli.nbrLivres].parution = annee;
			bibli.livre[bibli.nbrLivres].nbrPages = pages;

			bibli.nbrLivres = bibli.nbrLivres + 1;
		}
	}

	cout << "Généré " << nbr << " livres";
}
