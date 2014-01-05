#include "def_list.h"

int Rechercher(ListeInt &liste, int element)
{
    int i;
    
    i = 0;
    
    do {
        if (liste.data[i] == element){
            return i;
        } else {
            i = i + 1;
        }
    } while (i < liste.length);
    
    return -1;
    
}