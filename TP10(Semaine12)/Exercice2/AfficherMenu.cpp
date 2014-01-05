#include "biblio_livre.h"

/////////////////////////////////////////////////////
//  Procédure permettant d'Afficher le Menu d'une
//  bibliothèque
//  Entrée: La bibliothèque
//  Sortie: La bibliothèque
/////////////////////////////////////////////////////


void AfficherMenu( t_biblio& bibliotheque )
{
    int choix;
    
    void AfficherBibli( t_biblio  blibliotheque );
    void AjouterLivre( t_biblio& bibliotheque );
    void SupLivre( t_biblio& bibliotheque );
    void RechercherLivre( t_biblio& bibliotheque );
    
    do {
        
        cout << "////// MENU \\\\\\" << endl;
        cout << "1 - Afficher l'ensemble de la bibliotheque." << endl;
        cout << "2 - Ajouter un nouveau livre." << endl;
        cout << "3 - Supprimer un livre." << endl;
        cout << "4 - Rechercher un livre (par Titre)" << endl;
        cout << "5 - Quitter" << endl << endl;
        
        cout << "Entrer votre choix : ";
        cin >> choix;
        cout << endl;
        
        switch (choix) {
            case 1:
                AfficherBibli(bibliotheque);
                break;
                
            case 2:
                AjouterLivre(bibliotheque);
                break;
                
            case 3:
                SupLivre(bibliotheque);
                break;
                
            case 4:
                RechercherLivre(bibliotheque);
                break;
                
            case 5:
                break;
                
            default:
                cout << "Erreur de saisie....";
                break;
        }
        
    } while (choix != 5);
    
    cout << "Au revoir...";
    
}