#include "biblio_livre.h"

/////////////////////////////////////////////////////
//  Procédure permettant d'ajouter un livre à
//  la bibliothèque
//  Entrée: La bibliothèque
//  Sortie: La bibliothèque modifié
/////////////////////////////////////////////////////

void AjouterLivre( t_biblio& bibliotheque )
{
    
    string nvTitre , nvAuteur;
    int nvParution , nvPages;
    char confirmation , more;
    void controle_bornesup( int , int&);
    void controle_borneinf( int , int&);
    void controle_yes_no( char&);
    
    if (bibliotheque.nbrLivres >= 500) {
        
        cout << "Plus de place dans la bibliotheque... Il faut supprimer des livres.";
        
    } else {
        
        do {
            
            cout << "Enter le titre du nouveau livre : ";
            cin >> nvTitre;
            
            cout << "Entrer son auteur : ";
            cin >> nvAuteur;
            
            cout << "Entrer son annee de parution : ";
            cin >> nvParution;
            controle_bornesup( 2013, nvParution );
            
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
                bibliotheque.livre[bibliotheque.nbrLivres].auteur = nvAuteur;
                bibliotheque.livre[bibliotheque.nbrLivres].parution = nvParution;
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
