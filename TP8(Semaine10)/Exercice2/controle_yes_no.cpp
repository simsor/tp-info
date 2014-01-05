#include <iostream>
using namespace std;
/////////////////////////////////////////////////////
//  ProcÈdure permettant de controler la rÈponse 
//	utilisateur ( oui ou non)
//  EntrÈe: la rÈponse entrÈe                             
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