Programme transpose
Début
	Avec  matrice[100][100]: entier
	      n : entier // taille de la matrice
	      i, j : entier // compteur de boucle

	      procédure afficherMatrice(matrice[][100] : entier, n : entier ;)
	      procédure saisirMatrice(n : entier ; matrice[][100] : entier)
	      procédure transposerMatrice(n : entier; matrice[][100] : entier)
	      procédure Controler(; n : entier)

	Afficher "Saisir la taille n de la matrice carrée : "
	Saisir n
	Controler(; n)
	A la ligne
	Afficher "Saisie de la matrice : "
	A la ligne
	
	saisirMatrice(; matriceA)
	
	A la ligne
	Afficher "Matrice A :"
	A la ligne
	afficherMatrice(matriceA ;)

	A la ligne
	transposerMatrice(; matrice)	
	Afficher "Matrice B :"
	A la ligne
	afficherMatrice(; matriceB)
Fin transpose

	