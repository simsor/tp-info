/////////////////////////////////////////////////////
//  Procèdure permettant d'affficher le tableau
//  ayant sur ses lignes les notes pour chaques élèves
//
//  EntrÈe: le tableau ou sont enregistrées les notes
//  Le tableau ou se trouve le nombre de notes qu'a
//  chaque élèves
//  Le nombre d'leve dans la base
//
//  Sortie: RIEN
/////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void afficher_tableau( int tab_note[30][6], int nbr_note[30], int nbr_eleve)
{
    int i, j;
    
    for (i = 0; i < nbr_eleve; i++) {
        
        for (j = 0; j < nbr_note[i]; j++) {
            
            cout << tab_note[i][j] << "\t";
            
        }
        
        cout << endl;
        
    }
}