#include <iostream>
#include <string>

using namespace std;

bool estPalindrome( string mot)
{
    int i;
    bool palin;
    int oppose;
    
    palin = true;
    i = 0;
    
    while ((palin) && (i < (mot.size() - 1 - i))) {
        
        oppose = mot.size() - 1 - i;
        
        if (mot[i] != mot[oppose]) {
            
            palin = false;
            
        }
        
        i = i + 1;
    }
           
    return palin;
    
}
