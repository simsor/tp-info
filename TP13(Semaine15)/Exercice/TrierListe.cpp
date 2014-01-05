#include "def_list.h"

void TrierListe(ListeInt &liste)
{
	bool echange;
	int p;
	int temp;
	int i;
	p = liste.length-1;

	// Algorithme de tri à bulle
	echange = true;
	while (echange && p>0)
	{
		echange = false;
		for (i=0; i < p ; i++)
		{
			if (liste.data[i] > liste.data[i+1])
			{
				temp = liste.data[i];
				liste.data[i] = liste.data[i+1];
				liste.data[i+1] = temp;
				echange = true;
			}
		}

		p--;
	}

}
