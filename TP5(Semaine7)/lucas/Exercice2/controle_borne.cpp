#include <iostream>
using namespace std;

/////////////////////////////////////////////////////
//  Procédure permettant de controller que la      
//	valeur n entrée est supérieur à 1			   
//  Entrée: le nombre n entré				   
//  Sortie: RIEN								   
/////////////////////////////////////////////////////

void controler_borne(int& n)
{
	while (n < 2)
	{
		cout << "Erreur, n doit etre superieur a 1." << endl;
		cout << "Entrer n a nouveau: ";
		cin >> n;
		cout << endl;
	}
}