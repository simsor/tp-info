#include <iostream>
using namespace std;

////////////////////////////////////////////////
// Procédure permettant de saisir une matrice passée
// en paramètre, d'une taille spécifiée
// ENTREE : la taille de la matrice
// SORTIE : la matrice
///////////////////////////////////////////////


void saisirMatrice(int n, int matrice[][100])
{
  int i, j; // Compteurs de boucle

  for (i=0; i < n; i++)
    {
      for (j=0; j < n; j++)
	{
	  cout << "[" << i << "][" << j << "] : ";
	  cin >> matrice[i][j];
	}
    }
}
