#include <iostream>
using namespace std;
/////////////////////////////////////////////////////
//  Procédure permettant de controler la réponse 
//	utilisateur ( oui ou non)
//  Entrée: la réponse entrée                             
//  Sortie: RIEN                                                                   
/////////////////////////////////////////////////////


void controle_yes_no(char& reponse)
{
	while (reponse != 'o' && reponse != 'n')
	{
		cout << "Mauvaise reponse entree.." << endl;
		cout << "Re-entrer votre reponse (o/n): ";
		cin >> reponse;
		cout << endl;
	}
}