#include "biblio_livre.h"

/////////////////////////////////////////////////////
//  Procédure permettant d'ajouter un livre à
//  la bibliothèque
//  Entrée: La bibliothèque
//  Sortie: La bibliothèque modifié
/////////////////////////////////////////////////////

void AjouterLivre( t_biblio& bibliotheque )
{
    
    string nvTitre , nomAuteur, prenomAuteur;
    int nvAnnee, nvPages, idAuteur, choix, i;
    char confirmation , more;
	bool redemander;
    void controle_bornesup( int , int&);
    void controle_borneinf( int , int&);
    void controle_yes_no( char&);
	int RechercherAuteur(t_biblio bibli, string nom, string prenom);
	void AjouterAuteur(t_biblio &bibli);
    
    if (bibliotheque.nbrLivres >= 500) {
        
        cout << "Plus de place dans la bibliotheque... Il faut supprimer des livres.";
        
    } else {
		
		do { // Ajout de livre
			cout << "Enter le titre du nouveau livre : ";
			cin >> nvTitre;

			do { // Spécification de l'auteur
				
				cout << "Auteur du livre : " << endl;
				cout << "1. Rechercher un auteur" << endl;
				cout << "2. Choisir dans une liste" << endl;
				cout << "3. Ajouter un nouvel auteur" << endl;
				cout << "Votre choix : ";
				cin >> choix;
			
				switch(choix)
				{
				case 1:
					cout << "Nom de l'auteur : ";
					cin >> nomAuteur;
					cout << "Prénom de l'auteur : ";
					cin >> prenomAuteur;
					idAuteur = RechercherAuteur(bibliotheque, nomAuteur, prenomAuteur);
					if (idAuteur != -1)
					{
						cout << "Auteur trouvé : " << bibliotheque.auteurs[idAuteur].nom << " " << bibliotheque.auteurs[idAuteur].prenom << endl;
						redemander = false;
					}
					else
					{
						cout << "L'auteur n'a pas été trouvé.";
						redemander = true;
					}
					break;
					
				case 2:
					for (i=0; i < bibliotheque.nbrAuteurs; i++)
					{
						cout << i+1 << ". " << bibliotheque.auteurs[i].nom << " " << bibliotheque.auteurs[i].prenom << endl;

					}
					cout << "Votre choix (-1 pour annuler) : ";
					do {
						cin >> idAuteur;
					} while ( idAuteur > bibliotheque.nbrAuteurs);

					if (idAuteur > 0)
					{
						idAuteur = idAuteur - 1;
						redemander = false;
					}
					else
						redemander = true;
					break;

				case 3:
					AjouterAuteur(bibliotheque);
					redemander = true;
					break;

				default:
					cout << "Choix invalide" << endl;
					redemander = true;
					break;
				} // Fin choix de l'auteur
			} while (redemander);
            
            cout << "Entrer son annee de parution : ";
            cin >> nvAnnee;
            controle_bornesup( 2013, nvAnnee );
            
            cout << "Entrer son nombre de pages : ";
            cin >> nvPages;
            controle_borneinf( 0 , nvPages );
            cout << endl;
            
            cout << "Voulez vous vraiment ajouter ce livre ? (o/n) : ";
            cin >> confirmation;
            controle_yes_no(confirmation);
            cout << endl;
            
            if (confirmation == 'o') {
                
                bibliotheque.livre[bibliotheque.nbrLivres].titre = nvTitre;
                bibliotheque.livre[bibliotheque.nbrLivres].auteur = idAuteur;
                bibliotheque.livre[bibliotheque.nbrLivres].parution = nvAnnee;
                bibliotheque.livre[bibliotheque.nbrLivres].nbrPages = nvPages;
                
                bibliotheque.nbrLivres = bibliotheque.nbrLivres + 1;
                
            }
            
            cout << "Voulez vous ajouter un autre livre ? (o/n) : ";
            cin >> more;
            controle_yes_no(more);
            cout << endl;
            
		} while (more == 'o');
        
    }
    
}
