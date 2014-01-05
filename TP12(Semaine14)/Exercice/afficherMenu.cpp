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
    int nbr, i;
	string nomAuteur, prenomAuteur, nomLivre;
    
    void AfficherBibli( t_biblio  blibliotheque );
    void AjouterLivre( t_biblio& bibliotheque );
    void SupprimerLivre(string nom, t_biblio& bibliotheque );
    int  RechercherLivre(t_biblio bibliotheque, string nom);
	void AjouterAuteur(t_biblio& biblio);
	int RechercherAuteur(t_biblio biblio, string nom, string prenom);
    bool VerifierEnsemble( t_biblio bibliotheque );
    
    do {
        cout << endl << "____________________________" << endl;
        cout << "____________MENU____________" << endl << endl;
        cout << "1 - Afficher l'ensemble de la bibliotheque." << endl;
        cout << "2 - Ajouter un nouveau livre." << endl;
		cout << "3 - Ajouter un auteur." << endl;
        cout << "4 - Supprimer un livre." << endl;
		cout << "5 - Rechercher un auteur." << endl;
        cout << "6 - Rechercher un livre (par Titre)" << endl;
        cout << "7 - Verifier que la bibliotheque est un ensemble" << endl;
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
            AjouterAuteur(bibliotheque);
			break;

		case 4:
			cout << "Entrer le nom du livre à supprimer : ";
			cin >> nomLivre;
			SupprimerLivre(nomLivre, bibliotheque);
			break;

		case 5: // Recherche d'auteur
			cout << "Entrer le nom de l'auteur à rechercher : ";
			cin >> nomAuteur;
			cout << "Entrer le prénom de l'auteur à rechercher : ";
			cin >> prenomAuteur;
			i = RechercherAuteur(bibliotheque, nomAuteur, prenomAuteur);
			if (i != -1)
			{
				cout << bibliotheque.auteurs[i].nom << " " << bibliotheque.auteurs[i].prenom << ", auteur de nationalité " << bibliotheque.auteurs[i].nationalite << " né en " << bibliotheque.auteurs[i].naissance;
				if (bibliotheque.auteurs[i].estMort)
					cout << ", mort en " << bibliotheque.auteurs[i].mort << ".";
				else
					cout << ".";
			}
			else
				cout << "L'auteur n'existe pas !";
			cout << endl;
			break;
			
		case 6: // Recherche de livre
			cout << "Entrer le nom du livre à rechercher : ";
			cin >> nomLivre;
			i = RechercherLivre(bibliotheque, nomLivre);
			if (i != -1)
			{
				cout << bibliotheque.livre[i].titre << " de " << bibliotheque.auteurs[bibliotheque.livre[i].auteur].nom << " " << bibliotheque.auteurs[bibliotheque.livre[i].auteur].prenom << ", publié en " << bibliotheque.livre[i].parution << " et " << bibliotheque.livre[i].nbrPages << " pages.";
			}
			else
				cout << "Le livre n'existe pas.";

			break;
            
		case 7:
			ensemble = VerifierEnsemble(bibliotheque);
			if (ensemble) {
				cout << "La bibliothèque est bien un ensemble." << endl;
			} else {
				cout << "La bibliothèque n'est pas un ensemble." << endl;
			}
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
