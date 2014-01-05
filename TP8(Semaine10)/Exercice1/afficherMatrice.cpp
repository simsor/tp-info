#include <iostream>
using namespace std;

/////////////////////////////////////////////
// Procédure permettant d'afficher une
// matrice passée en paramètre. L'alignement
// se fait avec des tabulations
// ENTREE : la matrice à afficher, ainsi que sa taille
// SORTIE : rien
////////////////////////////////////////////

void afficherMatrice(int matrice[][100], int n)
{
	int i, j; // Compteurs de boucle
	for (i=0; i < n; i++)
	{
		for (j=0; j < n; j++)
		{
			cout << matrice[i][j] <<  "\t";
		}
		cout << endl;
	}
}
