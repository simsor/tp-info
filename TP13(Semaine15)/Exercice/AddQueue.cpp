#include "def_list.h"
#include <iostream>

using namespace std;

void AddQueue(ListeInt &liste, int element)
{
    
    if (liste.length == MAX_ELEM_LISTINT)
    {
        cout << "  Impossible d'ajouter.. Plus de place." << endl;
        return;
    }

    liste.data[liste.length] = element;
    liste.length = liste.length + 1;
    
    //cout << "  Elément bien ajouté" << endl;
    
}

