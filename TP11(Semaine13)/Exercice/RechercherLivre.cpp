#include "biblio_livre.h"

/////////////////////////////////////////////////////
//  Procédure permettant de rechercher un livre
//  dans la bibliothèque
//  Entrée: La bibliothèque
//  Sortie: RIEN
/////////////////////////////////////////////////////

void RechercherLivre( t_biblio& bibliotheque)
{
    
    int i;
    string selection;
    bool trouve;
    
    trouve = false;
    
    if (bibliotheque.nbrLivres == 0) {
        
        cout << "Il n'y a pas de livres dans la bibliotheque..." << endl;
        cout << "Merci d'en ajouter." << endl << endl;
        
    } else {
        
        cout << "Quel livre rechercher vous (Titre) ? : ";
        cin >> selection;
        cout << endl;
        
        i = 0;
        
        do {
            if (bibliotheque.livre[i].titre == selection) {
                
                cout << "Le livre a bien ete trouve. Voici ses informations :" << endl;
                
                trouve = true;
                
                cout << "Titre : " << bibliotheque.livre[i].titre << "  ;  "
                << "Auteur : " << bibliotheque.livre[i].auteur << "  ;  "
                << "Date de parution : " << bibliotheque.livre[i].parution << "  ;  "
                << "Nombre de pages : " << bibliotheque.livre[i].nbrPages << "\t" << endl << endl;
                
            } else {
                i = i + 1;
            }
        } while (i < bibliotheque.nbrLivres && trouve == false);
        
        if (trouve) {
        } else {
            cout << "Ce livre n'est pas dans la bibliotheque";
        }
        
        
        
    }
    
}
