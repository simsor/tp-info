#include <iostream>
using namespace std;

int main()
{
	float nb1, nb2;
	char operateur;

	cout << "Entrer l'operateur: ";
	cin >> operateur;

	while (operateur!='+' && operateur!='-' && operateur!='*' && operateur!='/')
	{
		cout << "Entrer un operateur (+, -, * ou /): ";
		cin >> operateur;
	}

	cout << "Entrer le premier operande: ";
	cin >> nb1;

	cout << "Entrer le deuxieme operande: ";
	cin >> nb2;

	if (operateur=='+')
	{
		cout << nb1+nb2;
	}
	else 
	{
		if (operateur=='-')
		{
			cout << nb1-nb2;
		}
		else
		{
			if (operateur=='*')
			{
				cout << nb1*nb2;
			}
			else
			{
				if (operateur=='/')
				{
					if (nb2==0)
					{
						do
						{
							cout << "Le deuxieme operande ne peut pas etre egal a 0." << endl;
							cout << "Entrer le deuxieme operande: ";
							cin >> nb2;
						} while (nb2==0);
						cout << nb1/nb2;
					}
					else
					{
						cout << nb1/nb2;
					}
				}
			}
		}
	}
	
	cout << endl;
	return 0;
}