///////////////////////////////////////////////////////
// Fonction permettant de vérifier si la bibliothèque est
// un ensemble (ne contient qu'une fois chaque livre)
// Entrée : la bibliothèque
// Sortie : un booléen
//////////////////////////////////////////////////////


Fonction verifierEnsemble(bibli) retourne booléen
Début
		Avec i, j, courant : entier
			 ensemble : booléen
		
		booléen <- vrai
		i <- 0
		j <- 0
		Tant que (i < bibli.nbLivres et ensemble) faire
				j <- i
				Tant que (j < bibli.nbLivres et ensemble) faire
						Si bibli.livres[i] = bibli.livres[j] et i != j alors
								ensemble <- faux
						Fin si
						j++
				Fin faire
				i++
		Fin faire

		retourner ensemble
Fin verifierEnsemble
