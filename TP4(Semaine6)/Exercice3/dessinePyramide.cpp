#include <iostream>
using namespace std;

void dessinePyramide(int hauteur)
{
	int i; // Compteur de boucle
	void dessineLigne(int, int);

	for(i=1; i <= hauteur; i=i+1)
	{
		dessineLigne(i, hauteur);
		cout << endl;
	}
}