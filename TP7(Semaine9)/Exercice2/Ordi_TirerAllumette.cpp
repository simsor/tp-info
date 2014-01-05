#include <iostream>
using namespace std;

/////////////////////////////////////////
// Procédure simulant un tirage d'allumettes par l'ordinateur.
// ENTREE: le nombre d'allumettes restantes
// SORTIE: le nombre d'allumettes après que l'ordinateur ait joué
/////////////////////////////////////////

void Ordi_TirerAllumette( int &allu)
{
    int tirer;
    int Alea(int, int);

    srand((unsigned) time(0));
    if (allu < 3)
    {
	tirer = Alea(1, allu);
	// Pour ne pas tirer plus d'allumettes que possible
    }
    else
    {
	tirer = Alea(1, 3);
    }

    cout << "L'Ordinateur tire " << tirer << " allumette(s)" << endl;
    allu = allu - tirer;
}
