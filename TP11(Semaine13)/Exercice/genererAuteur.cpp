#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

////////////////////////////////////////////////////////
// Fonction générant un nom d'auteur à partir d'une banque
// de prénoms et noms trouvée sur Internet.
// Entrée : Rien
// Sortie : Un nom complet aléatoire (prénom + nom)
///////////////////////////////////////////////////////

string genererAuteur()
{
	// liste trouvé sur Internet, et codé généré grâce à un script
	string prenoms[600];
	string noms[300];
	int i, j;
	int Alea(int, int);

	prenoms[0]="abel";
	prenoms[1]="absolon";
	prenoms[2]="achille";
	prenoms[3]="adam";
	prenoms[4]="adélaïde";
	prenoms[5]="adèle";
	prenoms[6]="adeline";
	prenoms[7]="adolphe";
	prenoms[8]="adrien";
	prenoms[9]="adrienne";
	prenoms[10]="agathe";
	prenoms[11]="agnès";
	prenoms[12]="aimé";
	prenoms[13]="aimée";
	prenoms[14]="alain";
	prenoms[15]="albert";
	prenoms[16]="albertine";
	prenoms[17]="alexandre";
	prenoms[18]="alexandrie";
	prenoms[19]="alexis";
	prenoms[20]="alfred";
	prenoms[21]="alice";
	prenoms[22]="aline";
	prenoms[23]="alison";
	prenoms[24]="alphonse";
	prenoms[25]="alphonsine";
	prenoms[26]="amarante";
	prenoms[27]="amaury";
	prenoms[28]="ambre";
	prenoms[29]="ambroise";
	prenoms[30]="amédée";
	prenoms[31]="amélie";
	prenoms[32]="anaïs";
	prenoms[33]="anastasie";
	prenoms[34]="anatole";
	prenoms[35]="andré";
	prenoms[36]="andrée";
	prenoms[37]="angèle";
	prenoms[38]="angeline";
	prenoms[39]="angelique";
	prenoms[40]="anne";
	prenoms[41]="annette";
	prenoms[42]="anselme";
	prenoms[43]="antoine";
	prenoms[44]="antoinette";
	prenoms[45]="apollinaire";
	prenoms[46]="apolline";
	prenoms[47]="ariane";
	prenoms[48]="arianne";
	prenoms[49]="arienne";
	prenoms[50]="aristide";
	prenoms[51]="arlette";
	prenoms[52]="armand";
	prenoms[53]="armel";
	prenoms[54]="armelle";
	prenoms[55]="arnaud";
	prenoms[56]="arnaude";
	prenoms[57]="aude";
	prenoms[58]="auguste";
	prenoms[59]="augustin";
	prenoms[60]="aurèle";
	prenoms[61]="aurélie";
	prenoms[62]="aurelien";
	prenoms[63]="aurore";
	prenoms[64]="avril";
	prenoms[65]="axelle";
	prenoms[66]="baptiste";
	prenoms[67]="barbara";
	prenoms[68]="barnabé";
	prenoms[69]="barthélémy";
	prenoms[70]="basile";
	prenoms[71]="bastien";
	prenoms[72]="baudouin";
	prenoms[73]="béatrice";

	noms[0]="MARTIN";
	noms[1]="BERNARD";
	noms[2]="THOMAS";
	noms[3]="PETIT";
	noms[4]="ROBERT";
	noms[5]="RICHARD";
	noms[6]="DURAND";
	noms[7]="DUBOIS";
	noms[8]="MOREAU";
	noms[9]="LAURENT";
	noms[10]="SIMON";
	noms[11]="MICHEL";
	noms[12]="LEFEBVRE";
	noms[13]="LEROY";
	noms[14]="ROUX";
	noms[15]="DAVID";
	noms[16]="BERTRAND";
	noms[17]="MOREL";
	noms[18]="FOURNIER";
	noms[19]="GIRARD";
	noms[20]="BONNET";
	noms[21]="DUPONT";
	noms[22]="LAMBERT";
	noms[23]="FONTAINE";
	noms[24]="ROUSSEAU";
	noms[25]="VINCENT";
	noms[26]="MULLER";
	noms[27]="LEFEVRE";
	noms[28]="FAURE";
	noms[29]="ANDRE";
	noms[30]="MERCIER";
	noms[31]="BLANC";
	noms[32]="GUERIN";
	noms[33]="BOYER";
	noms[34]="GARNIER";
	noms[35]="CHEVALIER";
	noms[36]="FRANCOIS";
	noms[37]="LEGRAND";
	noms[38]="GAUTHIER";
	noms[39]="GARCIA";
	noms[40]="PERRIN";
	noms[41]="ROBIN";
	noms[42]="CLEMENT";
	noms[43]="MORIN";
	noms[44]="NICOLAS";
	noms[45]="HENRY";
	noms[46]="ROUSSEL";
	noms[47]="MATHIEU";
	noms[48]="GAUTIER";
	noms[49]="MASSON";
	noms[50]="MARCHAND";
	noms[51]="DUVAL";
	noms[52]="DENIS";

	i = Alea(0, 73);
	j = Alea(0,52);

	return prenoms[i] + "_" + noms[j];
}
