#include "biblio_livre.h"
#include <time.h>
#include <stdlib.h>

int main()
{
    t_biblio bibliotheque;
    void AfficherMenu( t_biblio& bibliotheque);
    
    bibliotheque.nbrLivres = 0;
    bibliotheque.nbrAuteurs = 0;
    AfficherMenu( bibliotheque );
    
}
