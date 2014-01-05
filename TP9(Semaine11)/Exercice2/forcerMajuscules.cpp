#include <iostream>
#include <string>
using namespace std;

string forcerMajuscules(string mot)
{
	int i, minMaj;

	minMaj = 'A' - 'a';

	for (i=0; i<mot.size(); i++)
	{
		if (mot[i] >= 'a' && mot[i] <= 'z')
			mot[i] = mot[i] + minMaj;
	}

	return mot;
}
