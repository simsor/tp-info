//
//  afficher_moyenne.cpp
//  TP 8 (Semaine 10)
//
//  Created by Lucas Souriau on 14/11/2013.
//  Copyright (c) 2013 Lucas Souriau. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void afficher_moyenne( int tab_note[30][6], string noms_eleves[30], int nbr_note[30], int nbr_eleve)
{
    int numero, i;
    float total;
    string nom;
    int rechercheTableau(string tableau[], int n, string recherche);
    
    cout << "Entrez le nom de l'eleve : ";
    cin >> nom;
    
    while (rechercheTableau(noms_eleves, nbr_eleve, nom) == -1) {
        cout << "Erreur! Cet eleve n'existe pas" << endl;
        cout << "Entrez le nom de l'eleve a nouveau : ";
        cin >> nom;
    }
    
    numero = rechercheTableau(noms_eleves, nbr_eleve, nom);
    total = 0;

    for (i=0; i<nbr_note[numero] ; i++) {
        
        total = total + tab_note[numero][i];
    }
    
    cout << "La moyenne de l'eleve " << nom << " est : " << total / nbr_note[numero] << endl;
    
}
