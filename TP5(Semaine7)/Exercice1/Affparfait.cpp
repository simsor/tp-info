#include <iostream>
#include <time.h>  
using namespace std;

int main()
{
	clock_t t;
	int n;
	void parfaits(int n);
	void controler(int& n);

	cout << "Entrer n: ";
	cin >> n;

	controler(n);

	cout << "Liste des nombres parfaits entre 1 et " << n << endl;
	
	t = clock();
 
	parfaits(n);

	t = clock() - t;
	printf ("It took me %d milliseconds (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
	return 0;
}