#include <iostream>

using namespace std;

/////////////////////////////////////////
//	Procedure qui permet de saisir et
//	verifier le nombre d'ampoules
//
//	Entree: RIEN
//	Sortie: le nombre entré et vérifié
/////////////////////////////////////////

int EntrerAmpoule()
{
	int nombre;


	do
	{
		cout << "Entrer un multiple de 10: ";
		cin >> nombre;

		if ((nombre%10) == 0) 
		{
			cout << "Nombre d'ampoule bien enregistre!" << endl;
			return nombre;
		}
		else 
		{
			cout << "Erreur: Le nombre entre n'est pas multiple de 10.";
		}

		cout << endl;

	}while (1==1);

}
