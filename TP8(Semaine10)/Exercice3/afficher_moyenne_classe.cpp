//
//  afficher_moyenne_classe.cpp
//  TP 8 (Semaine 10)
//
//  Created by Lucas Souriau on 14/11/2013.
//  Copyright (c) 2013 Lucas Souriau. All rights reserved.
//

#include <iostream>

using namespace std;

void afficher_moyenne_classe( int tab_note[30][6], int nbr_note[30], int nbr_eleve)
{
    int i, j, note_total;
    float total_classe, total;
    
    total = 0;
    total_classe = 0;
    note_total = 0;
    
    for (i=0; i<nbr_eleve; i++) {
        
        for (j=0; j<nbr_note[i]; j++) {
            
            total = total + (float)tab_note[i][j];
            
        }
        
        total_classe = total_classe + total;
        total = 0;
        
    }
    
    for (i=0; i<nbr_eleve; i++) {
        
        note_total = note_total + nbr_note[i];
        
    }
    
    cout << "Moyenne de la classe : " << total_classe / (float)note_total;
    
}
