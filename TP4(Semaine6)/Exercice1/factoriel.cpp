#include <iostream>
using namespace std;

unsigned long factoriel( unsigned long n )
{
	unsigned long res, i;
	res = 1;

	for (i=1; i <= n; i=i+1)
	{
		res = res * i;
	}	

	return res;
}