/////////////////////////////////////////////////////
// Procédure permettant d'ajouter un nouveau livre à
// la bibliothèque. Demande toutes les infos nécessaires
// Entrée : Rien
// Sortie : la bibliothèque avec le nouveau livre
////////////////////////////////////////////////////

Inclure Types.alg

procédure ajouterLivre(; bibli : t_bibli)
Début
		Avec nvTitre: chaîne
			nvAnnee, nvPages : entier
			choix, idAuteur, i : entier
			nomAuteur, prenomAuteur : chaîne
			redemander : booléen
			fonction rechercherAuteur(bibli : t_bibli, nom : chaîne, prenom : chaîne) retourne entier
			procédure ajouterAuteur(; bibli : t_bibli)
		
		Si (bibli.nbLivres >= 500)
				Afficher "La bibliothèque est pleine !"
		Sinon
				Afficher "Titre du livre : "
				Saisir nvTitre

				// Choix de l'auteur
				Répéter
						Afficher "Auteur du livre : "
						A la ligne
						Afficher "1. Rechercher un auteur"
						A la ligne
						Afficher "2. Choisir dans une liste"
						A la ligne
						Afficher "3. Ajouter un nouvel auteur"
						A la ligne
						Afficher "Votre choix : "
				
						Saisir choix
						Selon choix faire
								cas 1: Afficher "Nom de l'auteur : "
										Saisir nomAuteur
										Afficher "Prénom de l'auteur : "
										Saisir prenomAuteur
										idAuteur <- rechercherAuteur(bibli, nomAuteur, prenomAuteur)
										Si idAuteur != -1 Alors
												Afficher "Auteur trouvé : ", bibli.auteurs[idAuteur].nom, " ", bibli.auteurs[idAuteur].prenom, "."
												redemander <- faux
										Sinon
											Afficher "L'auteur n'a pas été trouvé."
											redemander <- vrai
										Fin si
		
								cas 2: Pour i de 0 à bibli.nbAuteurs -1 faire
											Afficher i+1, ". ", bibli.auteurs[i].nom, " ", bibli.auteurs[i].prenom
											A la ligne
									   Fin faire
										Afficher "Votre choix (-1 pour annuler) : "
										répéter
												Saisir idAuteur
										tant que (idAuteur > nbAuteurs)
										Si idAuteur < 0 alors
												idAuteur <- idAuteur - 1
												redemander <- faux
										Sinon
												redemander <- vrai
										Fin si
							    cas 3: ajouterAuteur(; bibli)
										redemander <- vrai

								défaut: Afficher "Choix invalide"
										redemander <- vrai
										A la ligne
						Fin faire
				Tant que (redemander)					
				// Fin choix de l'auteur

				Afficher "Année de parution : "
				nvAnnee <- SaisirEntierBorne(2013)
				Afficher "Nombre de pages : "
				nvPages <- SaisirEntierMin(1)
				
				bibli.livres[bibli.nbLivres].titre <- nvTitre
				bibli.livres[bibli.nbLivres].auteur <- idAuteur
				bibli.livres[bibli.nbLivres].parution <- nvAnnee
				bibli.livres[bibli.nbLivres].nbPages <- nvPages
				
				bibli.nbLivres <- bibli.nbLivres + 1
				Afficher "Livre ajouté."
				A la ligne
		Fin si

Fin ajouterLivre
