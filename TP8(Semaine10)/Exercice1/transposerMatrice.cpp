#include <iostream>
using namespace std;

void transposerMatrice(int n, int matriceA[][100], int matriceB[][100])
{
  int matrice_temp[100][100];
  int i, j; // Compteurs de boucle
  void copierMatrice(int n, int depuis[][100], int vers[][100]);

  for (i=0; i < n; i++)
    {
      for (j=0; j < n; j++)
	{
	  matrice_temp[j][i] = matriceA[i][j];
	}
    }

  copierMatrice(n, matrice_temp, matriceB);
}
