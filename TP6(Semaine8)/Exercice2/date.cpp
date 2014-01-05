#include <iostream>
using namespace std;

int main()
{
    int jour, mois, annee;
    int num_jour;

    bool DateValide(int, int, int);
    int JourSemaine(int, int, int);

    void SaisirEntierMinMax(int min, int max, int& retour);
    void SaisirEntierMin   (int min, int& retour);

    cout << "Saisir une date postérieure au 01/01/2000" << endl;
    cout << "Entrer le jour: ";
    SaisirEntierMinMax(1, 31, jour);

    cout << "Entrer le mois: ";
    SaisirEntierMinMax(1, 12, mois);

    cout << "Entrer l'annee: ";
    SaisirEntierMin(2000, annee);

    if (DateValide(jour, mois, annee))
    {
	num_jour = JourSemaine(jour, mois, annee);
	cout << "Le " << jour << "/" << mois << "/" << annee << " est un ";
	switch (num_jour)
	{
	case 0: cout << "lundi";
	    break;
	case 1: cout << "mardi";
	    break;
	case 2: cout << "mercredi";
	    break;
	case 3: cout << "jeudi";
	    break;
	case 4: cout << "vendredi";
	    break;
	case 5: cout << "samedi";
	    break;
	case 6: cout << "dimanche";
	}

	cout << " (jour " << num_jour << ")";
    }
    else
    {
	cout << "La date n'est pas valide !";
    }

    cout << endl;
    return 0;
}
			       
