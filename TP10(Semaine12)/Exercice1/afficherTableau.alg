//////////////////////////////////////////
// Procédure permettant d'afficher un tableau
// passé en paramètre
// Entrée : Le tableau et sa taille
// Sortie : Rien
///////////////////////////////////////////

procédure afficherTableau(tab[] : entier, n : entier ;)
Début
		Avec i : entier

		Pour i de 0 à n-1 faire
				Afficher tab[i], "\t"
				Si (i mod 5 = 0 et i != 0) alors
						A la ligne
				Fin si
		Fin faire
Fin afficherTableau
