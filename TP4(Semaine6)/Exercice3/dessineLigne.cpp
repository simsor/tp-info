#include <iostream>
using namespace std;

void dessineLigne(int ligne, int hauteur)
{
	int i, // Compteur boucle
		base, // Nombre d'étoiles à la base de la pyramide
		espace, // Nombre d'espaces de chaque coté des étoiles
		etoile; // Nombre d'étoiles de la ligne

	base = 2 *  hauteur - 1;
	espace = (base - (2*ligne - 1)) / 2;
	etoile = 2 * ligne - 1;

	for (i=1; i <= espace; i=i+1)
	{
		cout << " ";
	}

	for (i=1; i <= etoile; i=i+1)
	{
		cout << "*";
	}

	for (i=1; i <= espace; i=i+1)
	{
		cout << " ";
	}
}