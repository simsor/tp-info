#include <iostream>
#include <string>

using namespace std;

int nbr_voyelles( string mot)
{
    int nbr;
    int i , j;
    string voyelles;
    
    voyelles = "aeiouyAEIOUY";
    nbr = 0;
    
    for (i=0; i < mot.size(); i++) {
        for (j=0; j <= 13; j++) {
            if (mot[i] == voyelles[j]) {
                nbr = nbr + 1;
            }
            
        }
    }
    
    return nbr;
    
}
