#include <iostream>
using namespace std;

//////////////////////////////
//  Fonction calculant le jour de la semaine
//  correspondant à la date passée en paramètre
//  Entrée: trois nombres correspondant à la date
//  Sortie: le jour de la semaine (de 0 à 6)
//////////////////////////////

int JourSemaine(int jour, int mois, int annee)
{
    int jour_semaine;
    int jour_actuel, mois_actuel, annee_actuelle;
    void CalculLendemain(int& jour, int& mois, int& annee);

    jour_semaine = 5;
    jour_actuel = 1;
    mois_actuel = 1;
    annee_actuelle = 2000; // On initialise au 1er janvier 2000

    while (jour_actuel != jour || mois_actuel != mois || annee_actuelle != annee)
    {
	CalculLendemain(jour_actuel, mois_actuel, annee_actuelle);
	// On calcule le lendemain jusqu'à arriver sur le jour demandé.
	switch (jour_semaine)
	{
	case 6: jour_semaine = 0;
	    break;
	default: jour_semaine = jour_semaine + 1;
	    break;
	}
    }

    return jour_semaine;
}
