Procédure saisirNouveauNom(; tab_noms[30][6] : chaîne, n : entier)
Début
	Avec nom_temp : chaîne
	     fonction rechercheTableau(tableau[30][6] : chaîne, n : entier, recherche : chaîne)

	Si (n < 100) Alors
	   Saisir nom_temp
	   Si (rechercheTableau(tab_noms, n, nom_temp) = -1) Alors
	      // Si le nom n'existe pas
	      tab_noms[n] <- nom_temp
	      n <- n + 1
	   Fin si
	Sinon
	   Afficher "Il n'y a plus de place dans le tableau."
	Fin si
Fin saisirNouveauNom