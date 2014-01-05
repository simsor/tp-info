#include <iostream>
using namespace std;

void trierTableau(int n, int tab[])
{
	int p, temp, i;
	bool faitEchange;

	p = n-1;
	faitEchange = true;
	while (faitEchange && p>0) {
		faitEchange = false;

		for (i=0; i<p; i++){
			if (tab[i] > tab[i+1]){
				temp = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = temp;
				faitEchange = true;
			}
		}

		p--;
	}
}
