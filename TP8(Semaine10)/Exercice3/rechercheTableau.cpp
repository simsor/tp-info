#include <iostream>
#include <string>
using namespace std;

////////////////////////////////////////////////
// Fonction recherchant une chaîne dans un tableau de chaînes
// Retourne l'indice du premier trouvé, et -1 si la chaîne
// n'est pas dans le tableau
// ENTREE : Le tableau, sa taille et la chaîne à chercher
// SORTIE : L'indice de la chaîne trouvée, ou -1 sinon
////////////////////////////////////////////////

int rechercheTableau(string tableau[], int n, string recherche)
{
  int i;
  i = 0;

  while (tableau[i] != recherche && i < n) 
  {
      i++;
  }
  
  if (tableau[i] == recherche)
	  return i;
  else
	  return -1;
}
