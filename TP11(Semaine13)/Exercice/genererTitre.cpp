#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////
// Fonction retournant un nom de livre, formé de
// l'assemblage de trois parties (principe du cadavre
// exquis)
// Entrée : Rien
// Sortie : un nom de livre aléatoire
// Note : les titres sont renvoyés sans espaces, mais avec
// des underscores. Ceci afin de permettre leur recherche.
//////////////////////////////////////////////////////

string genererTitre()
{
	string debuts[10];
	string milieux[10];
	string fins[10];
	int i, j, k; // Les indices aléatoires des parties
	int Alea(int, int);
	
	debuts[0] = "Les_aventures";
	debuts[1] = "L'histoire";
	debuts[2] = "L'épopée";
	debuts[3] = "Documentation";

	milieux[0] = "de_Peter_le_Koala";
	milieux[1] = "de_la_France";
	milieux[2] = "d'un_inconnu";
	milieux[3] = "de_l'humanité";
	milieux[4] = "du_pastafarisme";
	milieux[5] = "de_Leonard_de_Vinci";
	milieux[6] = "de_Richard_Stallman";
	milieux[7] = "de_l'IUT_du_Limousin";
	milieux[8] = "du_langage_C++";

	fins[0] = "pour_les_Nuls";
	fins[1] = "en_6_volumes,_vol_1";
	fins[2] = "au_Moyen-Age";
	fins[3] = "en_temps_de_crise";
	fins[4] = "durant_notre_ère";
	fins[5] = "dans_un_environnement_insonore";

	i = Alea(0, 3);
	j = Alea(0, 8);
	k = Alea(0, 5);

	return debuts[i] + "_" + milieux[j] + "_" + fins[k];
}
