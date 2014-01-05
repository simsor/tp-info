#include <iostream>

using namespace std;

/////////////////////////////////////////
//	Procedure qui controle la saisi de
//  l'utilisateur
//
//	Entree: le nombre n entre par 
//	l'utilisateur
//	Sortie: RIEN
/////////////////////////////////////////

void controle(int& n)
{
	while (n <= 0 )
	{
		cout << "Erreur: n doit etre superieur a 0." << endl;
		cout << "Saisir n a nouveau: ";
		cin >> n;
		cout << endl;
	}

}