#include <iostream>
using namespace std;

/////////////////////////////////////////////////////
//  Proc�dure permettant de controller que la      
//	valeur n entr�e est sup�rieur � 1			   
//  Entr�e: le nombre n entr�				   
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