//////////////////////////////////////////////////
// Procédure permettant de supprimer un livre de la
// bibliothèque
// Entrée : Rien
// Sortie : la bibliothèque
//////////////////////////////////////////////////

inclure Types.alg

Procédure supprimerLivre(; bibli : t_bibli, titre : chaîne)
Début
		Avec titre, choix : chaîne,
			 i : entier
			 fonction rechercherLivre(bibli : t_bibli, titre : chaîne) retourne entier

			i <- rechercherLivre(bibli, titre)

			Si (i != -1) alors
				Afficher "Le livre a été trouvé. Le supprimer ? (o/n) "
				Saisir choix
				Si (choix = 'o') alors
						bibli.livres[i].titre <- bibli.livres[bibli.nbLivres].titre
						bibli.livres[i].auteur <- bibli.livres[bibli.nbLivres].auteur
						bibli.livres[i].anneeParution <- bibli.livres[bibli.nbLivres].anneeParution
						bibli.livres[i].nbPages <- bibli.livres[bibli.nbLivres].nbPages
						bibli.nbLivres <- bibli.nbLivres - 1
				Fin si
			Sinon
				Afficher "Le livre n'existe pas !"
			Fin si
						
Fin supprimerLivre
