#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

////////////////////////////////////////
// Fonction déterminant un nombre aléatoire
// compris entre deux bornes
// ENTREE: Les deux bornes
// SORTIE: Le nombre choisi
////////////////////////////////////////

int Alea (int borne_inf, int borne_sup)
{
    int nombre_alea;
    borne_sup = borne_sup + 1; // le calcul ci-dessous renvoie un nombre dans [a ; b[, or on le veut dans [a ; b]
    
    nombre_alea = (int) ( ((float) rand() / (float) RAND_MAX) * (float) (borne_sup - borne_inf)) + borne_inf;

    return nombre_alea;
}
