/////////////////////////////////////////////////////
//  Procèdure permettant de calculer et afficher
//  la moyenne pour un élève choisis
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

void afficher_moyenne( int tab_note[30][6], int nbr_note[30], int nbr_eleve)
{
    int numero, i;
    float total;
    
    cout << "Entrez le numero de l'eleve : ";
    cin >> numero;
    
    while (numero > nbr_eleve) { // S'il y a moins d'élève que l'indice
        cout << "Erreur! Le numero est superieur au nombre d'eleve dans la base" << endl;
        cout << "Entrez le numero de l'eleve a nouveau : ";
        cin >> numero;
        
    }
    
    total = 0;
    
    for (i=0; i<nbr_note[numero - 1] ; i++) {
        
        total = total + tab_note[numero-1][i];
        
    }
    
    cout << "La moyenne de l'eleve numero " << numero << " est : " << total / nbr_note[numero - 1] << endl;
    
}