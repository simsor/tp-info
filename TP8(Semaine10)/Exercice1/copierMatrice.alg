//////////////////////////////////
// Copie une matrice dans une autre
// Les deux matrices doivent être carrées
// et de même taille
// ENTREE : la matrice "depuis", la matrice "vers", la taille n
// SORTIE : la matrice "vers", dont le contenu est remplacé par celui de "depuis"
//////////////////////////////////

Procédure copierMatrice( n : entier, depuis[][100] : entier ; vers[][100] : entier)
Début
	Avec i, j : entier

	Pour i de 0 à n-1 faire
	     Pour j de 0 à n-1 faire
	     	  vers[i][j] <- depuis[i][j]
	     Fin faire
	Fin faire
Fin copierMatrice
