#include <iostream>
using namespace std;

int main()
{
	int hauteur;
	void dessinePyramide(int);

	cout << "Entrer la hauteur de la pyramide: ";
	cin >> hauteur;

	if (hauteur > 0)
	{
		dessinePyramide(hauteur);
	}
	else
	{
		cout << "La hauteur n'est pas valide (elle doit etre superieure a 0)";
	}
	cout << endl;
	return 0;
}