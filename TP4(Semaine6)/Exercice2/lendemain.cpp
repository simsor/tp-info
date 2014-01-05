#include <iostream>
using namespace std;

int main()
{
	int jour, mois, annee;
	bool dateValide(int, int, int);
	void calculLendemain(int&, int&, int&);

	cout << "Entrer le jour: ";
	cin >> jour;

	cout << "Entrer le mois: ";
	cin >> mois;

	cout << "Entrer l'annee: ";
	cin >> annee;

	if( dateValide( jour, mois, annee ) )
	{
		calculLendemain(jour, mois, annee);
		cout << "Le jour suivant est le: " << jour << "/" << mois << "/" << annee;
	}
	else
	{
		cout << "La date n'est pas valide !";
	}

	cout << endl;
	return 0;
}