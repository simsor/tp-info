#include <iostream>
using namespace std;

//////////////////////////////////////////
// Procédure permettant d'afficher un tableau
// passé en paramètre
// Entrée : Le tableau et sa taille
// Sortie : Rien
///////////////////////////////////////////

void afficherTableau(int tab[], int n)
{
	int i;
	
	for (i=0; i<n; i++)
	{
		cout << tab[i] << "\t";
		if ((i+1) % 5 == 0)
			cout << endl;
	}
}
