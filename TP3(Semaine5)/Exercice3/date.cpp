#include <iostream>
using namespace std;

int main ()
{
	int jour, mois, annee;
	bool coherente;

	coherente = true;
	
	cout << "Saisir le jour: ";
	cin >> jour;

	cout << "Saisir le mois: ";
	cin >> mois;

	cout << "Saisir l'annee: ";
	cin >> annee;

	if (mois < 1 || mois > 12 || jour < 1 || jour > 31)
	{ // Tests généraux vis-à-vis des jours et des mois
		coherente = false;
	}
	else
	{
		if (mois==4 || mois==6 || mois==9 || mois==11)
		{ // Le cas des mois en 30 jours
			if (jour > 30)
			{
				coherente = false;
			}
		}
		else
		{
			if (mois==2)
			{ // Le mois de février
				if ((annee%4==0 && annee%100!=0) || (annee%400==0))
				{ // Année bissextile
					if (annee < 1582)
					{
						cout << "La notion d'annee bissextile du calendrier gregorien n'a ete adoptee qu'en 1582. Cette notion n'est donc pas vraiment juste pour les annees precedentes."<<endl;
						if (jour > 28)
							coherente = false;
					}
					else if (jour > 29)
					{
						coherente = false;
					}
				}
				else
				{
					if (jour > 28)
					{
						coherente = false;
					}
				}
			}
		}
	}

	if (coherente)
	{
		cout << "La date est coherente";
	}
	else
	{
		cout << "La date n'est pas coherente";
	}

	cout << endl;

	return 0;
}
