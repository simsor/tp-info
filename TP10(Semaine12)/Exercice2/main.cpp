#include "biblio_livre.h"

int main()
{
    t_biblio bibliotheque;
    void AfficherMenu( t_biblio& bibliotheque);
    
    bibliotheque.nbrLivres = 0;
    
    AfficherMenu( bibliotheque );
    
}