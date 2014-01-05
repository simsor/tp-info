type t_livre = {
				titre : chaîne,
				auteur : entier,
				anneeParution : entier,
				nbPages : entier
			}
type t_bibli = {
				livres[500] : t_livre,
				auteurs[500] : t_auteur,
				nbLivres : entier,
				nbAuteurs : entier
			}
type t_auteur = {
				nom : chaîne;
				prenom : chaîne;
				nationalite : chaîne;
				naissance : entier;
				estMort : booléen;
				mort : entier;
			}
