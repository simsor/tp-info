#include <iostream>
using namespace std;

int main()
{
	int terme;
	cout << "Saisir votre terme de depart : ";
	cin >> terme;
	cout << "Erreur, votre nombre choisi ne doit pas etre inferieur a 1."<<endl;
	cout << "Entrer votre essai a nouveau : ";
	cin >> terme;
	return 0;
}
