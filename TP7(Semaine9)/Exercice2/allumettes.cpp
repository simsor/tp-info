#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int nb_allumettes, tour;
    void Joueur_TirerAllumette( int &allu);
    void Ordi_TirerAllumette  ( int &allu);
    void Controler( int &nombre);
    int Alea(int, int);

    srand((unsigned) time(0));
    
    cout << "=====  Jeu des allumettes  =====" << endl;
    cout << "Nombre d'allumettes ? (-1 pour aleatoire) : ";
    cin >> nb_allumettes;
    Controler(nb_allumettes);

    tour = 0; // 0 = Joueur et 1 = Ordi
    while (nb_allumettes > 0)
    {
	cout << "Il reste " << nb_allumettes << " allumettes." << endl;
	cout << "Tour ";

	switch (tour)
	{
	case 0:
	    cout << "du Joueur" << endl;
	    Joueur_TirerAllumette(nb_allumettes);
	    tour = 1;
	    break;
	case 1:
	    cout << "de l'Ordinateur" << endl;
	    Ordi_TirerAllumette(nb_allumettes);
	    tour = 0;
	    break;
	}
	cout << endl;
    }

    cout << "Vainqueur : ";
    switch (tour)
    {
    case 0: cout << "vous";
	break;
    case 1: cout << "l'Ordinateur";
	break;
    }

    cout << endl;
    return 0;
}
