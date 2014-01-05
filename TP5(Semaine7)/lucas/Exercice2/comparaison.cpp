#include <iostream>
using namespace std;

/////////////////////////////////////////////////////
//  Procédure permettant de comparer de nombres		   
//  Entrée: les deux nombres à comparer			   
//  Sortie: RIEN								   
/////////////////////////////////////////////////////

void comparaison(int nbr1, int nbr2)
{
	if (nbr1 > nbr2)
	{
		cout << "Le nombre choisi est plus petit !" << endl << endl;
	}
	else
	{
		if (nbr1 < nbr2)
		{
			if (nbr1 < 0)
			{

			}
			else
			{
				cout << "Le nombre choisi est plus grand !" << endl << endl;
			}
		}
	}
}