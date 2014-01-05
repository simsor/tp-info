///////////////////////////////////////////////////
// Procédure permettant d'ajouter un nouvel auteur
// à la base.
// Entrée : Rien
// Sortie : La bibliothèque avec le nouvel auteur
//////////////////////////////////////////////////

inclure Types.alg

procédure ajouterAuteur(; bibli : t_bibli)
Début
		Avec nomAuteur, prenomAuteur, nationaliteAuteur : chaîne
			 anneeNaissance, anneeMort : entier
			 estMort : booléen
			 choix : caractère
			 nvAuteur : t_auteur
			 fonction rechercherAuteur(bibli, nom, prenom) retourner entier

		Afficher "Nom de l'auteur : "
		Saisir nomAuteur
		Afficher "Prénom de l'auteur : "
		Saisir prenomAuteur
		Tant que (rechercherAuteur(bibli, nomAuteur, prenomAuteur) != -1) faire
			Afficher "L'auteur existe déjà !"
			A la ligne
			Afficher "Nom de l'auteur : "
			Saisir nomAuteur
			Afficher "Prénom de l'auteur : "
			Saisir prenomAuteur
		Fin faire

		Afficher "Nationalité de l'auteur : "
		Saisir nationaliteAuteur
		Afficher "Année de naissance : "
		Saisir anneeNaissance
		Afficher "L'auteur est-il mort ? (o/n) "
		controle_oui_non(; choix)
		Si choix = "o" alors
				Afficher "Année de mort : "	
				Saisir anneeMort
				estMort <- vrai
		Sinon
				estMort <- faux
				anneeMort <- 0
		Fin si
		
		Afficher "Ajouter cet auteur, êtes-vous sûr ? (o/n)"
		Saisir choix
		controle_oui_non(; choix)
		Si choix = "o" faire
				nvAuteur.nom <- nomAuteur
				nvAuteur.prenom <- prenomAuteur
				nvAuteur.nationalite <- nationaliteAuteur
				nvAuteur.naissance <- anneeNaissance
				nvAuteur.estMort <- estMort
				nvAuteur.mort <- anneeMort
				bibli.auteurs[bibli.nbAuteurs] <- nvAuteur
				bibli.nbAuteurs <- bibli.nbAuteurs + 1
		Fin faire
				
Fin ajouterAuteur
