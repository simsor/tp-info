#include <iostream>
#include <string>
using namespace std;

bool estPalindrome(string mot)
{
	int i, oppose;
	bool palin;

	palin = true;
	i = 0;
	while (palin && i < mot.size() -1 -i) {
		// Quand i = oppose ou i > oppose, on arrête : ça signifie qu'on est arrivé au milieu
		
		oppose = mot.size() -1 -i;
		if (mot[i] != mot[oppose])
			palin = false;
		
		i++;
	}

	return palin;
}
