////////////////////////////////////////////////
// Procédure permettant de saisir une matrice passée
// en paramètre, d'une taille spécifiée
// ENTREE : la taille de la matrice
// SORTIE : la matrice
///////////////////////////////////////////////

Procédure saisirMatrice(n : entier ; matrice[][100] : entier)
Début
	Avec i, j : entier // Compteurs de boucle

	Pour i de 0 à n-1 Faire
     	     Pour j de 0 à n-1 Faire
     	     	  Afficher "[", i, "][", j, "] : "
	  	  Saisir matrice[i][j]
     	     Fin faire
	Fin faire
Fin saisirMatrice