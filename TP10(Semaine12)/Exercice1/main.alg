Programme tableaux
Début
		Avec tab[500] : entier
			 n : entier
			 choix : caractère
			 procédure creerTableau(; tab[] : entier, n : entier)
			 procédure afficherTableau(tab[] : entier, n : entier ;)
			 procédure trierTableau(n : entier ; tab[] : entier)

		n <- 0
		
		Répéter
				Afficher "=====  Menu  ====="
				A la ligne
				Afficher "1. Créer un nouveau tableau"
				A la ligne
				Afficher "2. Afficher le tableau"
				A la ligne
				Afficher "3. Trier le tableau"
				A la ligne
				Afficher "4. Quitter"
				A la ligne
				Afficher "Votre choix : "
				Saisir choix
		
				Selon choix faire
						cas 1 : creerTableau(; tab, n)
						cas 2 : afficherTableau(tab, n ;)
						cas 3 : trierTableau(n ; tab)
						cas 4 : Rien
						défaut : Afficher "Mauvaise entrée."
				Fin faire
				A la ligne
		Tant que choix != 4
		
Fin tableaux

		
