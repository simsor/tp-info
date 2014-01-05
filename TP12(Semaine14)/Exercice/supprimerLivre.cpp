#include "biblio_livre.h"

/////////////////////////////////////////////////////
//  Procédure permettant de supprimer un livre
//  de la bibliothèque
//  Entrée: La bibliothèque
//  Sortie: La bibliothèque modifiée
// /////////////////////////////////////////////////////

void SupprimerLivre(string nom, t_biblio& bibliotheque)
{
    string titre, choix;
	int i;
	int RechercherLivre(t_biblio bibli, string nom);

	i = RechercherLivre(bibliotheque, nom);

	if (i != -1)
	{
		cout << "Le livre a été trouvé. Le supprimer ? (o/n)";
		cin >> choix;
		if (choix == "o")
		{
			bibliotheque.livre[i].titre = bibliotheque.livre[bibliotheque.nbrLivres-1].titre;
			bibliotheque.livre[i].auteur= bibliotheque.livre[bibliotheque.nbrLivres-1].auteur;
			bibliotheque.livre[i].parution = bibliotheque.livre[bibliotheque.nbrLivres-1].parution;
			bibliotheque.livre[i].nbrPages = bibliotheque.livre[bibliotheque.nbrLivres-1].nbrPages;
			bibliotheque.nbrLivres = bibliotheque.nbrLivres - 1;
		}
	}
	else
		cout << "Le livre recherché n'existe pas.";
}
