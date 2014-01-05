#include "biblio_livre.h"

bool VerifierEnsemble( t_biblio bibliotheque )
{
    bool ensemble;
    int i, j;
    
    ensemble = true;
    i = 0;
    
    if (bibliotheque.nbrLivres == 0 || bibliotheque.nbrLivres == 1) {
        ensemble = true;
    }
    
    else
    {
    
        do {
            j = i + 1;
        
            do {
                if (bibliotheque.livre[i].titre == bibliotheque.livre[j].titre) {
                    if (bibliotheque.livre[i].auteur == bibliotheque.livre[j].auteur) {
                        if (bibliotheque.livre[i].parution == bibliotheque.livre[j].parution) {
                            if (bibliotheque.livre[i].nbrPages == bibliotheque.livre[j].nbrPages) {
                                ensemble = false;
                            }
                        }
                    }
                }
            
                j = j + 1;
            
            } while (j < bibliotheque.nbrLivres && ensemble);
        
            i = i + 1;
        
        } while (i < bibliotheque.nbrLivres-1 && ensemble);
        
    }
    
    return ensemble;
    
}


