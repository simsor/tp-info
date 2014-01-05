#include <iostream>
#include <string>
using namespace std;

void SaisirPersonne(string& nom, string& prenom)
{
	cout << "Entre ton nom: ";
	cin >> nom;
	cout << "Entre ton prenom: ";
	cin >> prenom;
}