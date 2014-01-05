#include <iostream>
using namespace std;

int main()
{
	int n;
	void DessineCarre(int n);
	void controle(int& n);


	cout << "Entrer un nombre n: ";
	cin >> n;

	controle(n);

	cout << endl;
	DessineCarre(n);
	
	cout << endl;

	return 0;
}