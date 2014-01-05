#include <iostream>
#include <string>
using namespace std;

void saisirMotsMultiples(string mots[], int &n)
{
	char continuer;

	n = 0;
	do {
		cout << "Saisir un mot : ";
		cin >> mots[n];

		n++;
		cout << "Encore un mot ? (o/n) ";
		cin >> continuer;
	} while (continuer == 'o');
}
