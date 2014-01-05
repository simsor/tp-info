#include <iostream>
using namespace std;

int main1()
{
	char encore;
	unsigned long n;
	unsigned long factoriel(unsigned long);
	encore = 'o';
	
	do
	{
		if (encore == 'o')
		{
			cout << "Entrer un entier: ";
			cin >> n;
			if (n > 0)
			{
				cout << "Factoriel de " << n << ": " << factoriel(n);
			}
			else
			{
				cout << "Le nombre doit etre positif.";
			}
		}

		cout << endl << "Encore ?  ";
		cin >> encore;
	} while (encore == 'o');

	cout << endl;
	return 0;
}