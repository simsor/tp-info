/////////////////////////////////////////////////////
//  Procèdure permettant de calculer et afficher
//  la moyenne de la classe entière
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

void afficher_moyenne_classe( int tab_note[30][6], int nbr_note[30], int nbr_eleve)
{
    int i, j, note_total;
    float total_classe, total;
    
    total = 0;
    total_classe = 0;
    note_total = 0;
    
    for (i=0; i<nbr_eleve; i++) {
        
        for (j=0; j<nbr_note[i]; j++) {
            // Calcul déjà la somme des notes pour chaques élèves
            total = total + (float)tab_note[i][j];
            
        }
        
        total_classe = total_classe + total; // Somme de toutes les notes
        total = 0;
        
    }
    
    for (i=0; i<nbr_eleve; i++) {
        // Calcul combien il y a de notes pour toute la classe
        note_total = note_total + nbr_note[i];
        
    }
    
    cout << "Moyenne de la classe : " << total_classe / (float)note_total;
    
}