#include <iostream>
using namespace std;
/////////////////////////////////////////////////////
//  Proc�dure permettant de controler la r�ponse 
//	utilisateur ( oui ou non)
//  Entr�e: la r�ponse entr�e                             
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