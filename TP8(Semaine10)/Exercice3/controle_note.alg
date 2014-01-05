/////////////////////////////////////////////////////
//  Procédure permettant de contrôler une note
//  donc qu'elle soit comprise entre 0 et 20
//  Entrée: la note n entrée
//  Sortie: une note valide
/////////////////////////////////////////////////////


procédure controle_note( ; n )
Début
    
    Tant que ( n > 20 ) ou ( n < 0 ) faire
    
        Afficher "Erreur, une note doit être comprise entre 0 et 20..."
        A la ligne
        Afficher "Entrez à nouveau la note : "
        Saisir n
        A la ligne
        
    fin faire
    
fin controle_note
