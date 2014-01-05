#include <iostream>
#include <string>

using namespace std;

string majuscule( string mot)
{
    int i;
    
    for (i=0; i < mot.size(); i++) {
        
        if (( mot[i] >= 'a' ) && (mot[i] <= 'z')) {
            mot[i] = mot[i] - 32;
            
        }
        
    }
    
    return mot;
    
}
