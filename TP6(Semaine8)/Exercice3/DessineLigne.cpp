#include <iostream>

using namespace std;


/////////////////////////////////////////
//	Procedure qui dessine une ligne du 
//  carre en fonction de ses parametres
//
//	Entree: le maximum a atteindre et 
//	le nombre centrale de la ligne
//	Sortie: Decompte est changé
/////////////////////////////////////////

void DessineLigne(int& decompte, int maximum, int centre)
{

	while (decompte >  centre)
	{
		cout << decompte << " ";
		if (decompte < 10)
		{
			cout << " ";
		}
		decompte = decompte - 1;
	}
	cout << decompte << " ";
	if (decompte < 10)
	{
		cout << " ";
	}
	while (decompte <  maximum)
	{
		decompte = decompte + 1;
		cout << decompte << " ";
		if (decompte < 10)
		{
			cout << " ";
		}
	}

}