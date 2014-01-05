//////////////////////////////////////////////
// Fonction permettant de rechercher un auteur dans la bibliothèque
// Entrée : la bibliothèque, le nom et prénom de l'auteur
// Sortie : l'indice de l'auteur, -1 s'il n'existe pas
//////////////////////////////////////////////

#include "biblio_livre.h"

int RechercherAuteur(t_biblio bibli, string nom, string prenom )
{
    int i;
	bool b;
    
    i = 0;
    
    while (i < bibli.nbrAuteurs && (bibli.auteurs[i].nom != nom || bibli.auteurs[i].prenom != prenom)) {
        i++;
    }
    
    if (bibli.auteurs[i].nom != nom || bibli.auteurs[i].prenom != prenom) {
        i = -1;
    }
    
    return i;
}
