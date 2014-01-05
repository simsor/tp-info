#include "def_list.h"
#include <iostream>

using namespace std;

void SuppElement(ListeInt &liste, int position)
{
    int i;
    
    if (liste.length == 0 || position >= liste.length || position < 0) {
        if (liste.length == 0) {
            cout << "  Impossible de supprimer.. Il n'y a aucun élément. " << endl;
        }else{
           cout << "  Impossible de supprimer.. Cette position est hors de la liste. " << endl; 
        }
        return;
    }
    
    if (position >= 0 && position < liste.length) {
        for (i = position; i < liste.length; i++) {
            liste.data[i] = liste.data[i+1];
        }
        
        liste.length = liste.length - 1;
        
        cout << "  Elément correctement supprimé !" << endl;
        
    }
}
