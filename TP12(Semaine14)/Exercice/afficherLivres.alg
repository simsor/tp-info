/////////////////////////////////////
// Procédure affichant la liste des livres
// de la bibliothèque
// Entrée : la bibliothèque
// Sortie : rien
////////////////////////////////////

inclure Types.alg

Procédure afficherLivres(bibli : t_bibli;)
Début
		Avec i : entier
		
		A la ligne
		Afficher "=================================================================="
		Si (bibli.nbLivres > 0) alors
				Pour i de 0 à bibli.nbLivres-1 faire
						Afficher "| ", bibli.livres[i].titre, "\t | ", bibli.auteurs[bibli.livres[i].auteur].nom, "\t | ", bibli.livres[i].parution, "\t | ", bibli.livres[i].nbPages, " pages \t|"
						A la ligne
				Fin faire
		Sinon
				Afficher "| Aucun livre dans la bibliothèque"
		Fin si
		Afficher "=================================================================="
Fin afficherLivres
