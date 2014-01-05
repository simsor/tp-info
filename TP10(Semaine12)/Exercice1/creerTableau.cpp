#include <iostream>
#include <time.h>
using namespace std;

///////////////////////////////////////////////////
// Procédure demandant à l'utilisateur la taille d'un
// tableau. Le tableau est ensuite généré avec des nombres
// aléatoires
// Entrée : rien
// Sortie : le tableau et sa taille
/////////////////////////////////////////////////

void creerTableau( int tab[], int &n)
{
	int i;
	int Alea(int, int);

	cout << "Quelle taille pour le tableau ? ";
	cin >> n;
	while (n<1 || n>500) {
		cout << "Taille invalide. Resaisir : ";
		cin >> n;
	}

	for (i=0; i<n; i++) {
		tab[i] = Alea(0, 100);
	}
}
