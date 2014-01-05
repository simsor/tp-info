#include "biblio_livre.h"

/////////////////////////////////////////
// Procédure permettant de supprimer un
// livre de la bibliothèque.
// Entrée : Rien
// Sortie : la bibliothèque ôtée d'un livre
/////////////////////////////////////////

void SupLivre( t_biblio& bibliotheque)
{
    int i;
    string selection;
    char confirmation;
    bool trouve;
    void controle_yes_no( char&);
    
    trouve = false;
    i = 0;
    
    if (bibliotheque.nbrLivres == 0) {
        
        cout << "Il n'y a pas de livres dans la bibliotheque..." << endl;
        cout << "Merci d'en ajouter." << endl << endl;
        
    } else {
        
        cout << "Quel livre voulez vous supprimer ? (Titre) : ";
        cin >> selection;
        cout << endl;
        
        do {
            if (bibliotheque.livre[i].titre == selection) {
                
                cout << "Le livre a ete trouve." << endl;
                trouve = true;
                
                cout << "Confirmer la suppresion ? (o/n) : ";
                cin >> confirmation;
                controle_yes_no(confirmation);
                cout << endl;
                
                if (confirmation == 'o') {
                    
                    bibliotheque.livre[i].titre = bibliotheque.livre[bibliotheque.nbrLivres - 1].titre;
                    bibliotheque.livre[i].auteur = bibliotheque.livre[bibliotheque.nbrLivres - 1].auteur;
                    bibliotheque.livre[i].parution = bibliotheque.livre[bibliotheque.nbrLivres -1].parution;
                    bibliotheque.livre[i].nbrPages = bibliotheque.livre[bibliotheque.nbrLivres - 1].nbrPages;
                    
                    bibliotheque.nbrLivres = bibliotheque.nbrLivres - 1;
                    
                    cout << "Livre bien supprime! " << endl << endl;
                    
                }
                
            } else {
                
                i = i + 1;
                
            }
        } while (i < bibliotheque.nbrLivres || trouve == false);
        
        
        if (trouve) {
        } else {
            cout << "Aucun livre avec ce nom dans la bibliotheque...";
        }
        
    }
    
    
    
}