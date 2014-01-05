#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "Entrer a: ";
	cin >> a;

	while (a < 0)
	{
		cout << "Erreur: a doit etre superieur a 0." << endl;
		cout << "Entrer a: ";
		cin >> a;
		cout << endl;
	}

	cout << "Entrer b: ";
	cin >> b;

	while (b < 0)
	{
		cout << "Erreur: b doit etre superieur a 0." << endl;
		cout << "Entrer b: ";
		cin >> b;
		cout << endl;
	}

	while (a != b)
	{	
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}

	cout << "PGCD(a, b) = " << a << endl;
	return 0;
}