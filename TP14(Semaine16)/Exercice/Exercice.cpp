#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char car_actuel;
	FILE* fic;
	int ligne;
	string nom_fic, nextpage;

	cout << "Entrer le nom du fichier : ";
	cin >> nom_fic;
	fic = fopen(nom_fic.c_str(), "r");
	if (fic == NULL)
	{
		cout << "Erreur lors de l'ouverture de " << nom_fic << " en lecture." << endl;
		return 1;
	}
	else
	{
		ligne = 1;
		fread(&car_actuel, sizeof(char), 1, fic);
		while(!feof(fic))
		{
			cout << ligne << ": ";
			while (car_actuel != '\n' && !feof(fic)) // On lit jusqu'à un retour chariot ou la fin
			{
				cout << car_actuel;
				fread(&car_actuel, sizeof(char), 1, fic);
			}
			fread(&car_actuel, sizeof(char), 1, fic);
			cout << endl;
			ligne++;

			if (ligne % 20 == 0)
			{
				cout << "Appuyer sur une touche";
				cin.get();
			}
		}
	}

	fclose(fic);
	return 0;
}
