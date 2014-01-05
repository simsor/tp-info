#include <iostream>
using namespace std;

/////////////////////////////////////////
//	Procedure qui dessine le carre ligne
//	par ligne
//
//	Entree: le nombre n entre par 
//	l'utilisateur
//	Sortie: RIEN
/////////////////////////////////////////


void DessineCarre(int n)
{
	int cote, i;
	int nombre, nombre_max, nombre_milieu;
	bool milieu; // Détermine si on est passé par le milieu
	void DessineLigne(int&, int, int);

	cote = 2 * n + 1;
	nombre = 2*n;
	nombre_max = nombre;
	milieu = false;
	nombre_milieu = n;


	for (i=1; i<=cote; i=i+1)
	{

		DessineLigne(nombre, nombre_max, nombre_milieu);

		if (nombre_max > n && !milieu)
		{
			nombre_max = nombre_max - 1;
			nombre_milieu = nombre_milieu - 1;
			nombre = nombre - 1;
		}
		else
		{
			if (nombre_max > n && milieu)
			{
				nombre_max = nombre_max + 1;
				nombre_milieu = nombre_milieu + 1;
				nombre = nombre + 1;
			}
			else
			{
				milieu = true;
				nombre_max = nombre_max + 1;
				nombre_milieu = nombre_milieu + 1;
				nombre = nombre + 1;
			}
		}
		cout << endl;
	}
}