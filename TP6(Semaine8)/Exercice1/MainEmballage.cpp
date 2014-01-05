#include <iostream>

using namespace std;

int main()
{
	int choix;
	int ampoule;
	void Afficher_Menu(int& choix, int& ampoule);
    
	ampoule = 1;

	do
	{
		cout << "------Menu------" << endl << endl;
		Afficher_Menu(choix, ampoule);
	}while (choix != 3);

	cout << "Au revoir..." << endl;

	return 0;

}
