#include <iostream>
using namespace std;

/////////////////////////////////////////////////////
//  Procédure calculant et affichant les           //
//  nombres parfaits entre 1 et n				   //
//  Entrée: le nombre borne						   //
//  Sortie: RIEN								   //
/////////////////////////////////////////////////////

void parfaits(int n)
{
	int i, j, somme;

	somme = 0;

	if (n<6)
	{
		cout << "Il n'y a pas de nombre parfait entre 1 et " << n << endl <<endl;
	}
	else
	{
		for(i=2; i<=n; i=i+1)
		{
			for (j=1; j<=i-1; j=j+1)
			{
				if (i % j == 0)
				{
					somme = somme + j;
				}
			}
			if (somme == i)
			{
				cout << i << endl;
			}
			somme = 0;
		}
	}

}