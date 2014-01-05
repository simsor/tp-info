//////////////////////////////////
// Procédure contrôlant la valeur de l'entier
// en paramètre. 0 > n >= 100
// ENTREE : l'entier à contrôler
// SORTIE : un entier saisi entre 0 et 100
/////////////////////////////////

procédure Controler(; n : entier)
Début
	Tant que ( n <= 0 ou n > 100) faire
	     Afficher "Erreur de saisie (max: 100). Re-saisir : "
	     Saisir n
	Fin faire
Fin Controler