///////////////////////////
// Procédure transposant la matrice passée
// en paramètre
// ENTREE : la matrice à transposer, et sa taille
// SORTIE : la matrice transposée
///////////////////////////

Procédure transposerMatrice(n : entier ; matriceA[][100] : entier, matriceB[][100] : entier)
Début
	Avec matrice_temp[100][100] : entier
	     i, j : entier // Compteurs de boucle
	     procédure copierMatrice(n : entier, depuis[][100] : entier ; vers[][100] : entier)

	Pour i de 0 à n-1 faire
	     Pour j de 0 à n-1 faire
	     	  matrice_temp[j][i] <- matriceA[i][j]
	     Fin faire
	Fin faire
	
	copierMatrice(n, matrice_temp, matriceB)
Fin transposerMatrice