#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int tab[500], n;
	int choix;
	void creerTableau(int tab[], int &n);
	void afficherTableau(int tab[], int entier);
	void trierTableau(int n, int tab[]);

	n = 0;
	srand((unsigned) time(0));

	do {
		cout << "=====  Menu  =====" <<endl;
		cout << "1. Créer un nouveau tableau"<<endl;
		cout << "2. Afficher le tableau"<<endl;
		cout << "3. Trier le tableau"<<endl;
		cout << "4. Quitter" << endl;
		cout << "Votre choix : ";
		cin >> choix;
		
		switch (choix) {
		case 1:
			creerTableau(tab, n);
			break;
		case 2:
			afficherTableau(tab, n);
			break;
		case 3:
			trierTableau(n, tab);
			break;
		case 4:
			break;
		default:
			cout << "Mauvaise entrée.";
			break;
		}
		
		cout << endl;
	} while (choix != 4);

	return 0;
}
