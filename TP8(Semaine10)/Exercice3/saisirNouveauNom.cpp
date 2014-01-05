#include <iostream>
#include <string>
using namespace std;

/////////////////////////////////////////////
// Procédure permettant la saisie d'un nouveau
// nom dans la base. On vérifiera que le nom n'existe
// pas déjà.
// ENTREE : le tableau des noms, sa taille
// SORTIE : Le tableau contenant le nouveau nom, et la taille à jour
/////////////////////////////////////////////

void saisirNouveauNom( string tab_noms[30], int &n)
{
  string nom_temp;
  int rechercheTableau(string tableau[], int n, string recherche);

  if (n < 100)
  {
      cin >> nom_temp;
      if (rechercheTableau(tab_noms, n, nom_temp) == -1)
	  { // Si le nom n'existe pas
		  tab_noms[n] = nom_temp;
		  n = n+1;
	  }
  }
  else
  {
      cout << "Il n'y a plus de place dans le tableau." << endl;
  }
}
