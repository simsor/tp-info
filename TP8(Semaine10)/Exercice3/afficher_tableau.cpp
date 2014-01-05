//
//  afficher_tableau.cpp
//  TP 8 (Semaine 10)
//
//  Created by Lucas Souriau on 14/11/2013.
//  Copyright (c) 2013 Lucas Souriau. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void afficher_tableau( int tab_note[30][6], string noms_eleves[30], int nbr_note[30], int nbr_eleve)
{
    int i, j;
    
    for (i = 0; i < nbr_eleve; i++) {
        
        for (j = 0; j < nbr_note[i]; j++) {
            
			if (j ==0)
			{ // On affiche son nom
				cout << noms_eleves[i] << "\t";
			}
			cout << tab_note[i][j] << "\t";
		}
        
        cout << endl;
        
    }
}
