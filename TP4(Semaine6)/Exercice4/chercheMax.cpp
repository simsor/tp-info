#include <iostream>
using namespace std;

int main()
{
	unsigned long n; // MAX:  4 294 967 295
	char encore;
	unsigned long factoriel(unsigned long);
	
	encore = 'o';
	n = 0;

	do
	{
		n = n+1;
		cout << n << "! = " << factoriel(n) << endl;
		cin >> encore;
	}while (encore == 'o');

	return 0;
}