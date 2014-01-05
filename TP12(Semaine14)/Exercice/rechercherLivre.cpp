#include "biblio_livre.h"

/////////////////////////////////////////////////////
//  Procédure permettant de rechercher un livre
//  dans la bibliothèque
//  Entrée: La bibliothèque et le titre à rechercher
//  Sortie: l'indice
/////////////////////////////////////////////////////

int RechercherLivre(t_biblio bibliotheque, string titre)
{
    
    int i;

	i=0;
	while( i < bibliotheque.nbrLivres && bibliotheque.livre[i].titre != titre)
	{
		i++;
	}

	if( bibliotheque.livre[i].titre != titre)
		i = -1;

	return i;
}
