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
	bool ensemble;
    int nbr;
    
    void AfficherBibli( t_biblio  blibliotheque );
    void AjouterLivre( t_biblio& bibliotheque );
    void SupLivre( t_biblio& bibliotheque );
    void RechercherLivre( t_biblio& bibliotheque );
	void feuBibli(t_biblio&);
	void genererLivres(int, t_biblio&);
    bool VerificationEns( t_biblio bibliotheque );
    
    do {
        cout << endl << "____________________________" << endl;
        cout << "____________MENU____________" << endl << endl;
        cout << "1 - Afficher l'ensemble de la bibliotheque." << endl;
        cout << "2 - Ajouter un nouveau livre." << endl;
        cout << "3 - Supprimer un livre." << endl;
        cout << "4 - Rechercher un livre (par Titre)" << endl;
        cout << "5 - Verifier que la bibliotheque est un ensemble" << endl;
		cout << "6 - Simuler un feu de bibliothèque" << endl;
		cout << "7 - Ajouter des livres aléatoires" << endl;
        cout << "8 - Quitter" << endl << endl;
        
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
			ensemble = VerificationEns(bibliotheque);
			if (ensemble) {
				cout << "La bibliothèque est bien un ensemble." << endl;
			} else {
				cout << "La bibliothèque n'est pas un ensemble." << endl;
			}
			break;
			
		case 6:
			feuBibli(bibliotheque);
			break;
		case 7:
			cout << "Combien de livres ? ";
			cin >> nbr;
			genererLivres(nbr, bibliotheque);
			break;
		case 8:
                break;
                
            default:
                cout << "Erreur de saisie....";
                break;
        }
        
    } while (choix != 8);
    
    cout << "Au revoir...";
    
}
