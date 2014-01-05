#include <iostream>

using namespace std;

/////////////////////////////////////////
//	Procedure qui affiche le Menu du 
//	programme
//
//	Entree: la requete de l'utilisateur
//  et le nombre d'ampoules
//	Sortie: la requete choisi et le 
//	nombre d'ampoules spécifié
/////////////////////////////////////////


void Afficher_Menu(int& requete, int& ampoule)
{
	void CalculBoite(int ampoule);
	int EntrerAmpoule();


	cout << "1 - Entrer le nombre d'ampoules" << endl;
	cout << "2 - Calculer et afficher les emballages" << endl;
	cout << "3 - Quitter..." << endl;

	cout << endl << "Votre choix: ";
	cin >> requete;
	cout << endl;

	switch (requete)
	{
	case 1:
		ampoule = EntrerAmpoule();
		break;

	case 2:
		if (ampoule == 1)
		{
			cout << "Erreur:" << endl;
			cout << "Aucun nombre d'ampoule precedemment entre." << endl;
		}
		else
		{
			CalculBoite(ampoule);
		}
		break;

	case 3:
		// Rien
		break;

	default: 
		cout << "Mauvaise saisie.";
		break;

	}

	cout << endl;

}