#include <iostream>

using namespace std;

/////////////////////////////////////////
//	Procedure qui calcule le nombre de
//	boites necessaires pour un nombre 
//	d'objets
//
//	Entree: le nombre d'objets a trier
//	Sortie: RIEN
//      Affiche le nombre de boîtes
/////////////////////////////////////////


void CalculBoite(int objet)
{
	int box1, box2, box3;

	box1 = objet / 200;
	box2 = (objet%200) / 50;
	box3 = ((objet%200)%50) / 10;

	cout << box1 << " emballage(s) de 200 ampoules." << endl;
	cout << box2 << " emballage(s) de 50 ampoules." << endl;
	cout << box3 << " emballage(s) de 10 ampoules." << endl;

}
