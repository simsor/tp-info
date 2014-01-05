#include "def_list.h"
#include <iostream>

using namespace std;

void SuppTete(ListeInt &liste)
{
    int i;
    
    if (liste.length == 0)
    {
        cout << "  Impossible de supprimer.. Il n'y a aucun élément. " << endl;
        return;
    }
    
    for (i = 0; i < liste.length; i++) {
        liste.data[i] = liste.data[i+1];
    }
    
    liste.length = liste.length - 1;
    
    cout << "  Elément bien supprimé" << endl;
    
    
}


