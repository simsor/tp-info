/////////////////////////////
// Procédure affichant un menu permettant de
// choisir entre différentes actions
// Entrée : rien
// Sortie : la bibliothèque et le tableau d'auteurs
////////////////////////////

inclure Types.alg

procédure afficherMenu(; bibli : t_bibli)
Début
		Avec choix, i : entier
			 nomLivre : chaîne
			 nomAuteur, prenomAuteur : chaîne
			
			procédure afficherLivres  (bibli : t_bibli;)
			procédure ajouterLivre    (; bibli : t_bibli)
			procédure ajouterAuteur	  (; bibli : t_bibli)
			procédure supprimerLivre  (titre : chaîne ; bibli : t_bibli)
			fonction  rechercherLivre (bibli : t_bibli, titre : chaîne;) retourne entier
			fonction  rechercherAuteur(bibli : t_bibli, nom : chaîne, prenom : chaîne) retourne entier
			fonction  verifierEnsemble(bibli : t_bibli) retourne booléen
		
		Répéter
				Afficher "== Menu =="
				A la ligne
				Afficher "1. Afficher l'ensemble des livres de la bibliothèque"
				A la ligne
				Afficher "2. Ajouter un livre"
				A la ligne
				Afficher "3. Ajouter un auteur"
				A la ligne
				Afficher "4. Supprimer un livre"
				A la ligne
				Afficher "5. Rechercher un auteur"
				A la ligne
				Afficher "6. Rechercher un livre par le titre"
				A la ligne
				Afficher "7. Vérifier que la bibliothèque est un ensemble"
				A la ligne
				Afficher "8. Quitter"
				A la ligne
				Afficher "Votre choix : "
				Saisir choix

				Selon choix faire
						cas 1: afficherLivres(bibli;)
						cas 2: ajouterLivre(; bibli)
						cas 3: ajouterAuteur(; bibli)
						cas 4: // Suppression de livre
								Afficher "Entrer le nom du livre à supprimer : "
								Saisir nomLivre
								supprimerLivre(nomLivre ; bibli)

						cas 5: // Recherche d'auteur
								Afficher "Entrer le nom de l'auteur à rechercher : "
								Saisir nomAuteur
								Afficher "Entrer le prénom de l'auteur à rechercher : "
								Saisir prenomAuteur
								i <- rechercherAuteur(bibli, nom, prenom)
								Si (i != -1) alors
										Afficher bibli.auteurs[i].nom, " ", bibli.auteurs[i].prenom, ", auteur de nationalité ", bibli.auteurs[i].nationalite, " né en ", bibli.auteurs[i].naissance
										Si bibli.auteurs[i].estMort alors
												Afficher ", mort en ", bibli.auteurs[i].mort, "."
										Sinon
												Afficher "."
										Fin si
							    Sinon
										Afficher "L'auteur n'existe pas !"
								Fin si
								A la ligne

						cas 6: // Recherche de livre
								Afficher "Entrer le nom du livre à rechercher : "
								Saisir nomLivre
								i <-rechercherLivre(bibli, nomLivre;) != -1)
								Si (i != -1) alors
										Afficher bibli.livres[i].titre, " de ", bibli.auteurs[bibli.livres[i].auteur].nom, " ", bibli.auteurs[bibli.livres[i].auteur].prenom, ", publié en ", bibli.livres[i].anneeParution, " et ", bibli.livres[i].nbPages, " pages"
								Sinon
										Afficher "Le livre n'existe pas."
								Fin si
		
						cas 7: // Vérifier si la bibliothèque est un ensemble
							   Si (verifierEnsemble(bibli)) Alors
										Afficher "La bibliothèque est un ensemble."
							   Sinon
										Afficher "La bibliothèque n'est pas un ensemble."
							   Fin si
						case 8: Rien
						défaut: Afficher "Mauvais choix."
				Fin faire
				
				A la ligne
				A la ligne
		Tant que (choix != 8)
Fin afficherMenu
