#include <iostream>
using namespace std;
/////////////////////////////////////////////////////
//  Procédure permettant de controller que la
//  valeur n entrée n'est pas supérieur à une
//  certaine borne
//  Entrée: le nombre n entréet la borne_inf deja
//  défini
//  Sortie: un nombre valide (supérieur à borne_inf)
/////////////////////////////////////////////////////


void controle_borneinf(int borne_inf, int& n)
{
    while (borne_inf >= n)
    {
        cout << "Erreur, votre nombre choisi ne doit pas etre inferieur a " << borne_inf + 1 << "." << endl;
        cout << "Entrer votre essai a nouveau : ";
        cin >> n;
        cout << endl;
    }
}