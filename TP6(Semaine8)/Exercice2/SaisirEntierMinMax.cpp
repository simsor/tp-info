#include <iostream>
using namespace std;

/////////////////////////////////////
//  Procédure permettant de saisir un entier compris entre un minimum
//  et un maximum
//  Entrée: le minimum et le maximum
//  Sortie: L'entier saisi, minimum < n < maximum
/////////////////////////////////////

void SaisirEntierMinMax(int min, int max, int& retour)
{
    do
    {
	cin >> retour;
    } while (retour < min || retour > max);

}
