#include <iostream>
using namespace std;

/////////////////////////////////////////
// Procédure contrôlant la saisie du nombre d'allumettes
// ENTREE: Le nombre entré par l'utilisateur
// SORTIE: Si -1: un nombre aléatoire entre 4 et 30
//         Si <0: on redemande une saisie
//         Sinon: nombre n'est pas modifié
/////////////////////////////////////////
void Controler( int &nombre)
{
    int Alea(int, int);

    if (nombre == -1)
    {
	nombre = Alea(4, 30);
    }
    else
    {
	if (nombre <= 0)
	{
	    cout << "Erreur de saisie." << endl;
	    cout << "Re-saisir : ";
	    cin >> nombre;
	    Controler(nombre);
	}
    }
}
