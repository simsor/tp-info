///////////////////////////////////////////////////
// Procédure permettant d'ajouter un nouvel auteur
// à la base.
// Entrée : Rien
// Sortie : La bibliothèque avec le nouvel auteur
//////////////////////////////////////////////////

#include "biblio_livre.h"

void AjouterAuteur( t_biblio &bibli)
{
    string nomAuteur, prenomAuteur, nationaliteAuteur;
    int anneeNaissance, anneeMort;
    bool estMort;
    char choix;
    t_auteur nvAuteur;
    int RechercherAuteur(t_biblio bibli, string nom, string prenom);
    void controle_yes_no( char& );
    
    cout << "Entrer le nom de l'auteur : ";
    cin >> nomAuteur;
    
    cout << "Prénom de l'auteur : ";
    cin >> prenomAuteur;
    
    while (RechercherAuteur(bibli, nomAuteur, prenomAuteur) != -1) {
        cout << "L'auteur existe déjà !" << endl;
        cout << "Nom de l'auteur : ";
        cin >> nomAuteur;
        cout << "Prénom de l'auteur : ";
        cin >> prenomAuteur;
    }
    
    cout << "Nationalité de l'auteur : ";
    cin >> nationaliteAuteur;
    
    cout << "Année de naissance : ";
    cin >> anneeNaissance;
    
    cout << "L'auteur est-il mort? (o/n) : ";
    cin >> choix;
    controle_yes_no(choix);
    
    if (choix == 'o') {
        cout << "Année de mort : ";
        cin >> anneeMort;
        estMort = true;
    } else {
        estMort = false;
        anneeMort = 0;
    }
    
    
    cout << "Etes vous sûr de vouloir ajouter cet auteur? (o/n) : ";
    cin >> choix;
    controle_yes_no(choix);
    
    if (choix == 'o') {
        nvAuteur.nom = nomAuteur;
        nvAuteur.prenom = prenomAuteur;
        nvAuteur.nationalite = nationaliteAuteur;
        nvAuteur.naissance = anneeNaissance;
        nvAuteur.estMort = estMort;
		if (estMort)
			nvAuteur.mort = anneeMort;
        bibli.auteurs[bibli.nbrAuteurs] = nvAuteur;
        bibli.nbrAuteurs = bibli.nbrAuteurs + 1;
    }
    
}
