#include <iostream>
#include <string>
using namespace std;

int main()
{
	string noms[100];
	int choix, n, i;
	int nombreVoyelles(string mot);
	bool estPalindrome(string mot);
	string forcerMajuscules(string mot);
	void saisirMotsMultiples(string mots[], int &n);

	choix = 0;
	n = 0;
	do {
		cout << "1. Saisir un tableau de mots" << endl;
		cout << "2. Afficher le nombre de voyelles de chaque mot" << endl;
		cout << "3. Vérifier si chaque mot est un palindrome" << endl;
		cout << "4. Mettre toutes les lettres de chaque mot en majuscules" << endl;
		cout << "5. Quitter" << endl;

		cout << "Votre choix : ";
		cin >> choix;
		
		switch(choix) {
		case 1: saisirMotsMultiples(noms, n);
			break;
		case 2: 
			for (i=0; i<n; i++) {
				cout << "Nombre de voyelles de " << noms[i] << " : " << nombreVoyelles(noms[i]) << endl;
			}
			break;
		case 3:
			for (i=0; i<n; i++){
				cout << "Le mot " << noms[i] << " ";
				if (estPalindrome(noms[i]))
					cout << "est un palindrome.";
				else
					cout << "n'est pas un palindrome.";
				cout << endl;
			}
			break;
		case 4:
			for (i=0; i<n; i++) {
				cout << noms[i] << " en majuscules : " << forcerMajuscules(noms[i]) << endl;
			}
			break;
		case 5: break;
		default:
			cout << "Mauvaise entrée.";
		}

		cout << endl;
	} while(choix != 5);

	return 0;
}
