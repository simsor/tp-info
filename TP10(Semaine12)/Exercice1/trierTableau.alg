///////////////////////////////////////
// Procédure triant le tableau en paramètre
// grâce à l'algorithme du tri à bulle
// Entrée : la taille du tableau
// Sortie : Le tableau trié
//////////////////////////////////////

procédure trierTableau(n : entier ; tab[] : entier )
Début
		Avec p, temp, i : entier
			 faitEchange : booléen

		p <- n-1
		faitEchange <- vrai

		Tant que faitEchange et p>0 faire
				faitEchange <- faux

				Pour i de 0 à p-1 faire
						Si tab[i] > tab[i+1] faire
								// Si les deux sont mal rangés, on échange
								temp <- tab[i]
								tab[i] <- tab[i+1]
								tab[i+1] <- temp
								faitEchange <- vrai
						Fin si
				Fin faire
			p <- p-1
		Fin faire
Fin trierTableau
