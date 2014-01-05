#include "biblio_livre.h"

/////////////////////////////////////////////////////
//  Procédure permettant d'Afficher l'ensemble de
//  la bibliothéque
//  Entrée: La bibliothèque
//  Sortie: RIEN
/////////////////////////////////////////////////////

void AfficherBibli( t_biblio bibliotheque)
{
    int i;
    
    if (bibliotheque.nbrLivres == 0) {
        
        cout << "Il n'y a pas encore de livres dans la bibliothéque..." << endl;
        cout << "Merci d'en ajouter" << endl << endl;
        
    }
    else{
        
        for (i=0; i < bibliotheque.nbrLivres; i++) {
            
            cout << "Titre : " << bibliotheque.livre[i].titre << "\t  ;  "
				 << "Auteur : " << bibliotheque.auteurs[bibliotheque.livre[i].auteur].nom << " " << bibliotheque.auteurs[bibliotheque.livre[i].auteur].prenom << "\t  ;  "
            << "Date de parution : " << bibliotheque.livre[i].parution << "\t  ;  "
            << "Nombre de pages : " << bibliotheque.livre[i].nbrPages << "\t" << endl << endl;

        }
    }
}
