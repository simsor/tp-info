#include <iostream>
using namespace std;

/////////////////////////////////////////////////////
//  Proc�dure permettant de controller que la      
//	valeur n entr�e n'est pas sup�rieur � une
//  certaine borne			   
//  Entr�e: le nombre n entr�et la borne_sup deja 
//  d�fini		   
//  Sortie: RIEN							   
/////////////////////////////////////////////////////

void controler_choix(int borne_sup, int& n)
{
	while (borne_sup < n)
	{
		cout << "Erreur, votre nombre choisi ne doit pas etre superieur a " << borne_sup << "." << endl;
		cout << "Entrer votre essai a nouveau : ";
		cin >> n;
		cout << endl;
	}
}
