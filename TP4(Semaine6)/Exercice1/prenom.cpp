#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nom, prenom;
	void SaisirPersonne( string& nom, string& prenom);
	void AfficherMessage(string nom, string prenom);
	void NouveauPrenom(string nom, string& prenom);

	SaisirPersonne(nom, prenom);
	AfficherMessage(nom, prenom);
	cout << "Changement de prenom" << endl;
	NouveauPrenom(nom, prenom);
	AfficherMessage(nom, prenom);

	return 0;
}