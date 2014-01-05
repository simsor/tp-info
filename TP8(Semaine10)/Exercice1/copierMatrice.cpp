#include <iostream>
using namespace std;

//////////////////////////////////
// Copie une matrice dans une autre
// Les deux matrices doivent être carrées
// et de même taille
// ENTREE : la matrice "depuis", la matrice "vers", la taille n
// SORTIE : la matrice "vers", dont le contenu est remplacé par celui de "depuis"
//////////////////////////////////


void copierMatrice(int n, int depuis[][100], int vers[][100])
{
  int i, j; // Compteurs de boucle

  for (i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
	{
	  vers[i][j] = depuis[i][j];
	}
    }
}
