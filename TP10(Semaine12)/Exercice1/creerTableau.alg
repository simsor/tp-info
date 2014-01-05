///////////////////////////////////////////////////
// Procédure demandant à l'utilisateur la taille d'un
// tableau. Le tableau est ensuite généré avec des nombres
// aléatoires
// Entrée : rien
// Sortie : le tableau et sa taille
/////////////////////////////////////////////////

Procédure creerTableau(; tab[] : entier, n : entier)
Début
		Avec i : entier

		Afficher "Quelle taille pour le tableau ? "
		Saisir n
		Tant que n < 1 ou n > 500 faire
				Afficher "Taille invalide. Resaisir : "
				Saisir n
		Fin faire

		Pour i de 0 à n-1 faire
				tab[i] <- random() * 100
		Fin faire
Fin creerTableau
