#ifndef BIBLIO_LIVRE_H
#define BIBLIO_LIVRE_H

#include <iostream>
#include <string>

using namespace std;

typedef struct {
    string titre;
    string auteur;
    int parution;
    int nbrPages;
} t_livre;

typedef struct{
    t_livre livre[500];
    int nbrLivres;
} t_biblio;

#endif