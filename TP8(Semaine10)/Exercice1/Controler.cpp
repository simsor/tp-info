#include <iostream>
using namespace std;

//////////////////////////////////
// Procédure contrôlant la valeur de l'entier
// en paramètre. 0 > n >= 100
// ENTREE : l'entier à contrôler
// SORTIE : un entier saisi entre 0 et 100
/////////////////////////////////

void Controler(int &n)
{
  while (n <= 0 || n > 100)
    {
      cout << "Erreur de saisie (max: 100). Re-saisir : ";
      cin >> n;
    }
}
