#include <iostream>
using namespace std;

void calculLendemain(int& jour, int& mois, int& annee)
{
	int jourapres, moisapres, anneeapres;
	if (jour < 28)
	{
		jourapres = jour + 1;
		moisapres = mois;
		anneeapres = annee;
	}
	else
	{
		if (jour < 30 && mois != 2) 
		{
			jourapres = jour + 1;
			moisapres = mois;
			anneeapres = annee;
		}
		else
		{
			if (mois==1 || mois==3 || mois==5 || mois==7 || mois==8 || mois==10 || mois==12)
			{ // Mois en 31 jours
				if (jour == 31)
				{
					jourapres = 1;
					if (mois==12)
					{
						moisapres = 1;
						anneeapres = annee + 1;
					}
					else
					{
						moisapres = mois + 1;
						anneeapres = annee;
					}
				}
				else
				{
					jourapres = jour + 1;
					moisapres = mois;
					anneeapres = annee;
				}
			}
			else
			{
				if (mois != 2)
				{ // Mois en 30 jours (sauf f�vrier)
					if (jour == 30)
					{
						jourapres = 1;
						moisapres = mois + 1;
						anneeapres = annee;
					}
					else
					{
						jourapres = jour + 1;
						moisapres = mois;
						anneeapres = annee;
					}
				}
				else
				{ // F�vrier
					if ((annee%4==0 && annee%100 != 0) || (annee%400 == 0) ) 
					{ // Ann�e bissextile (donc 29 jours)
						if (jour == 29) 
						{
							jourapres = 1;
							moisapres = mois + 1;
							anneeapres = annee;
						}
						else
						{
							jourapres = jour + 1;
							moisapres = mois;
							anneeapres = annee;
						}
					}
					else
					{
						// L'ann�e n'est pas bissextile
						if (jour == 28)
						{
							jourapres = 1;
							moisapres = mois + 1;
							anneeapres = annee;
						}
						else
						{
							jourapres = 1;
							moisapres = mois + 1;
							anneeapres = annee;
						}
					}
				}
			}
		}
	}

	jour = jourapres;
	mois = moisapres;
	annee = anneeapres;
}