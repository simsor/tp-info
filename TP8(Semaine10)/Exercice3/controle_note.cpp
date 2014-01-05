#include <iostream>
using namespace std;

/////////////////////////////////////////////////////
//  Procédure permettant de contrôler une note
//  donc qu'elle soit comprise entre 0 et 20
//  Entrée: la note n entrée
//  Sortie: une note valide
/////////////////////////////////////////////////////
void controle_note(int &n)
{
	while( n > 20 || n < 0)
	{
		cout << "Erreur, une note doit être comprise entre 0 et 20..." << endl;
		cout << "Entrez à nouveau la note : ";
		cin >> n;
		cout << endl;
	}
}
