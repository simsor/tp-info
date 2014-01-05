//
//  main.cpp
//  TP 8 (Semaine 10)
//
//  Created by Lucas Souriau on 14/11/2013.
//  Copyright (c) 2013 Lucas Souriau. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tab_note[30][6];
    int nbr_note[30];
    string noms_eleves[30];
    int i, j, choix, nbr_eleve;
    char continuer;
    void afficher_tableau(int tab_note[30][6], string noms_eleves[30], int nbr_note[30], int nbr_eleve);
    void afficher_moyenne(int tab_note[30][6], string noms_eleves[30], int nbr_note[30], int nbr_eleve);
    void afficher_moyenne_classe(int tab_note[30][6], int nbr_note[30], int nbr_eleve);
    void controle_yes_no( char& continuer);
	void controle_note(int&);
    void saisirNouveauNom(string tab_noms[30], int &n);
    
    i = 0;
    nbr_eleve = 0;
    
    do {
        
        j = 0;
        cout << "Entrer l'eleve numero " << i + 1 << endl;
		cout << "Entrer son nom : ";
		saisirNouveauNom(noms_eleves, nbr_eleve);
        
        do {
            
            cout << "Entrer la note " << j + 1 << " de l'eleve : ";
            cin >> tab_note[i][j];
			controle_note(tab_note[i][j]);

            j = j + 1;
            nbr_note[i] = j;
            
            cout << "Saisir une autre note? (o/n) : ";
            cin >> continuer;
            controle_yes_no(continuer);
            cout << endl;
			
        } while (continuer == 'o');
        
        i = i + 1;
        
        cout << "Entrer un autre eleve ? (o/n) : ";
        cin >> continuer;
        controle_yes_no(continuer);
        cout << endl;        
        
    } while (continuer == 'o');
    
    do {
        cout << endl << endl;
        cout << "////// MENU \\\\\\" << endl << endl;
        
        cout << "1. Afficher le tableau complet de notes" << endl;
        cout << "2. Afficher la moyenne d'un eleve" << endl;
        cout << "3. Afficher la moyenne de la classe" << endl;
        cout << "4. Quitter" << endl << endl;
        
        cout << "Saisir votre choix : ";
        cin >> choix;
        cout << endl;
        
        switch (choix) {
            case 1:
				afficher_tableau(tab_note, noms_eleves, nbr_note, nbr_eleve);
				break;
                
            case 2:
				afficher_moyenne(tab_note, noms_eleves, nbr_note, nbr_eleve);
				break;
		  
            case 3:
				afficher_moyenne_classe(tab_note, nbr_note, nbr_eleve);
				break;
		  
            case 4:
                break;
                
            default:
                cout << "Erreur de saisie.";
                break;
                
        }
        
    } while ( choix != 4 );
    
}

