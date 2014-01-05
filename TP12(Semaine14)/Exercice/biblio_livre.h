#ifndef BIBLIO_LIVRE_H
#define BIBLIO_LIVRE_H

#include <iostream>
#include <string>

using namespace std;

typedef struct {
	string nom;
	string prenom;
	string nationalite;
	int naissance;
	bool estMort;
	int mort;
} t_auteur;

typedef struct {
    string titre;
    int auteur;
    int parution;
    int nbrPages;
} t_livre;

typedef struct{
    t_livre livre[500];
    int nbrLivres;

	t_auteur auteurs[500];
	int nbrAuteurs;
} t_biblio;

#endif

