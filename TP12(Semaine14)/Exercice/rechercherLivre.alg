//////////////////////////////////////////////////
// Procédure permettant la recherche d'un livre
// dans la bibliothèque
// Entrée : la bibliothèque et le titre à chercher
// Sortie : L'indice du livre, ou -1
//////////////////////////////////////////////////

Avec t_livre = {
							titre : chaîne,
							auteur : chaîne,
							anneeParution : entier,
							nbPages : entier
				}
		 type t_bibli = {
										livres[500] : t_livre,
										nbLivres : entier
									}

fonction rechercherLivre(bibli : t_bibli, titre : chaîne) retourne entier
Début
		Avec i : entier

		i <- 0		

		Tant que ( i < bibli.nbLivres et bibli.livres[i].titre != titre) faire
				i ++
		Fin faire
		
		Si bibli.livre[i].titre != titre
		   Alors
			i <- -1
		Fin si
		
		Retourner i
Fin rechercherLivre
