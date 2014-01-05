#include <iostream>
using namespace std;

bool dateValide(int jour, int mois, int annee)
{
	bool coherente;
	coherente = true;

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
					if (jour > 29)
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

	return coherente;
}