Fonction rechercheTableau(tableau[] : chaîne, n : entier, recherche : chaîne) retourne entier
Début
	Avec i : entier

	Tant que (tableau[i] != recherche ou i < n) faire
	     i <- i+1
	Fin faire
	Si (tableau[i] = recherche) Alors
	   Retourner i
	Sinon
	   Retourner -1
	Fin si
Fin rechercheTableau