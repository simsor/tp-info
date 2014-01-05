#include "def_list.h"
#include <iostream>

using namespace std;

void AddElement(ListeInt &liste, int position, int element)
{
    int i;
    
    if (liste.length == MAX_ELEM_LISTINT || position > liste.length || position < 0) {
        if (liste.length == MAX_ELEM_LISTINT) {
            cout << "  Impossible d'ajouter.. Il n'y a plus de place. " << endl;
        }else{
           cout << "  Impossible d'ajouter.. Cette position est hors de la liste. " << endl;
        }
        return;
    }
    
    if (position >= 0 && position <= liste.length) {
        for (i = liste.length - 1; i >= position; i--) {
            liste.data[i+1] = liste.data[i];
        }
        
        liste.data[position] = element;
        liste.length = liste.length + 1;
        
        cout << "  Elément correctement ajouté !" << endl;
    }
}


