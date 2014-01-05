#include <iostream>
using namespace std;

//////////////////////////////////////////////////
// Procédure demandant au joueur de tirer des allumettes
// ENTREE: le nombre d'allumettes restantes
// SORTIE: le nombre d'allumettes après tirage.
// Le nombre d'allumettes tirées par le joueur est vérifié.
//////////////////////////////////////////////////

void Joueur_TirerAllumette(int &allu)
{
    int tirer;

    cout << "Tirer combien d'allumette(s) ? (de 1 a 3) : ";
    cin >> tirer;

    while ( tirer < 1 || tirer > 3 || (allu - tirer) < 0)
    {
	cout << "Erreur de saisie." << endl;
	cout << "Re-saisir : ";
	cin >> tirer;
    }

    cout << "Vous tirez " << tirer << " allumette(s)" << endl;
    allu = allu - tirer;
}
