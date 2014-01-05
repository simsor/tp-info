#include <iostream>
using namespace std;

/////////////////////////////////////
//  Procédure permettant de saisir un entier supérieur à un minimum
//  Entrée: le minimum
//  Sortie: L'entier saisi, > minimum
/////////////////////////////////////

void SaisirEntierMin(int min, int& retour)
{
    do
    {
	cin >> retour;
    }while (retour < min);
}
