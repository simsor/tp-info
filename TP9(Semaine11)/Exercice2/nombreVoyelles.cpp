#include <iostream>
#include <string>
using namespace std;

/////////////////////////////////////////////////
// Fonction retournant le nombre de voyelles de la 
// chaîne passée en paramètre.
// Entrée : La chaîne
// Sortie : le nombre de voyelles
/////////////////////////////////////////////////

int nombreVoyelles(string mot)
{
	int nbr;
	int i, j;
	string voyelles;

	voyelles = "aeiouyAEIOUY";
	nbr = 0;

	for (i=0; i<mot.size(); i++) {
		for (j=0; j<=13; j++) {
			if (mot[i] == voyelles[j])
				nbr++;
		}
	}

	return nbr;
}
