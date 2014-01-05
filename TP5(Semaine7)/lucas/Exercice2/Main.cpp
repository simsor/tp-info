#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main()
{
	int borne, nbr, choix, score;
	void controler_borne(int& borne);
	void controler_choix(int borne, int& choix);
	void comparaison(int choix, int nbr);

	cout << "Entrer la borne superieure : ";
	cin >> borne;
	cout << endl;

	controler_borne(borne);

	choix = 0;
	score = 0;

	do
	{
		nbr = borne * (float(rand() %100) / 100);
		cout << endl << "J'ai choisi un nombre entre 1 et " << borne << "... a vous de le deviner." << endl <<endl;

		do
		{
			score = score + 1;
			cout << "Essai numero " << score << " (entrer un nombre) : ";
			cin >> choix;

			controler_choix(borne ,choix);

			comparaison(choix, nbr);

		} while (choix != nbr && choix >= 0);


		if (choix == nbr)
		{
			cout << "Vous avez gagne (score:" << score << " essais), le nombre choisi etait bien " << nbr << " !" << endl;
			choix = 0;
			score = 0;
		}

	}while(choix >= 0);

	cout << "Plus envie de jouer... a bientot." << endl << endl;


	return 0;
}
