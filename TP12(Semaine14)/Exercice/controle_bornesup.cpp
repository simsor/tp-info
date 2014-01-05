#include <iostream>
using namespace std;
/////////////////////////////////////////////////////
//  Procédure permettant de contrôler que la
//	valeur n entrée n'est pas supérieur à une
//  certaine borne
//  Entrée: le nombre n entré et la borne_sup déjà
//  définie
//  Sortie: un nombre valide (inférieur à borne_sup)
/////////////////////////////////////////////////////


void controle_bornesup(int borne_sup, int& n)
{
    while (borne_sup < n)
    {
        cout << "Erreur, votre nombre choisi ne doit pas etre superieur a " << borne_sup << "." << endl;
        cout << "Entrer votre essai a nouveau : ";
        cin >> n;
        cout << endl;
    }
}