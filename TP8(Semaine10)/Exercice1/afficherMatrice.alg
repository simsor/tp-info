/////////////////////////////////////////////
// Procédure permettant d'afficher une
// matrice passée en paramètre. L'alignement
// se fait avec des tabulations
// ENTREE : la matrice à afficher, ainsi que sa taille
// SORTIE : rien
////////////////////////////////////////////

Procédure afficherMatrice(matrice[][100] : entier, n : entier ;)
Début
	Avec i, j : entier // Compteur de boucle
	
	Pour i de 0 à n-1 faire
	     Pour j de 0 à n-1 faire
	     	  Afficher matrice[i][j], "\t"
	     Fin faire
	     A la ligne
	Fin faire
Fin afficherMatrice
