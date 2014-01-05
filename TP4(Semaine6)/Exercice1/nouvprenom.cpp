#include <iostream>
#include <string>
using namespace std;

void NouveauPrenom(string nom, string& prenom)
{
	void AfficherMessage(string nom, string prenom);

	AfficherMessage(nom, prenom);
	cout << "Entre ton nouveau prenom: ";
	cin >> prenom;
}