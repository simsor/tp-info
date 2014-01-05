#include <iostream>
using namespace std;

/////////////////////////////////////////////////////
//  Procédure permettant de controller que la      
//	valeur n entrée n'est pas supérieur à une
//  certaine borne			   
//  Entrée: le nombre n entréet la borne_sup deja 
//  défini		   
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
