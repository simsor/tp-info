//////////////////////////////////////////////
// Fonction permettant de rechercher un auteur dans la bibliothèque
// Entrée : la bibliothèque, le nom et prénom de l'auteur
// Sortie : l'indice de l'auteur, -1 s'il n'existe pas
//////////////////////////////////////////////

fonction rechercherAuteur(bibli : t_bibli, nom : chaîne, prenom : chaîne) retourne entier
Début
		Avec i : entier

		i <- 0		

		Tant que ( i < bibli.nbAuteurs et (bibli.auteurs[i].nom != nom ou bibli.auteurs[i].prenom != prenom) ) faire
				i ++
		Fin faire
		
		Si (bibli.auteurs[i].nom != nom ou bibli.auteurs[i].prenom != prenom)
		   Alors
			i <- -1
		Fin si
		
		Retourner i
Fin rechercherAuteur
