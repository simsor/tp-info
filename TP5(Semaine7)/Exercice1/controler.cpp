#include <iostream>
using namespace std;	

void controler(int& n)
{
	while(n<2)
	{
		cout << "Erreur, n doit etre superieur a 1." << endl;
		cout << "Entrer n a nouveau: ";
		cin >> n;
	}
}