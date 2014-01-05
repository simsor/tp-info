#include "def_list.h"
#include <iostream>

using namespace std;

void Afficher(ListeInt &liste)
{
    int i;
    
    cout << "   -------------" << endl;
    cout << "   |   LISTE   |" << endl;
    cout << "   -------------" << endl;
    
    for (i = 0; i < liste.length; i++) {
        
        cout << "   | " << i;
        
        // Gestion nombre chiffre de la position
        if (i > 9) {
            if (i > 99) {
                cout << " | ";
            } else {
                cout << "  | ";
            }
        } else {
            cout << "   | ";
        }
        // Fin de gestion
        
        
        cout << liste.data[i];
        
        
        // Gestion nombre chiffre de l'element
        if (liste.data[i] > 9) {
            if (liste.data[i] > 99) {
                cout << " |" << endl;
            } else {
                cout << "  |" << endl;
            }
        } else {
            cout << "   |" << endl;
        }
        // Fin de gestion
        
        
        cout << "   -------------" << endl;
        
    }
}