#include <iostream>
using namespace std;

int main()
{
  int matriceA[100][100], matriceB[100][100];
  int n; // Taille de la matrice

  void afficherMatrice(int matrice[][100], int n);
  void saisirMatrice(int n, int matrice[][100]);
  void transposerMatrice(int n, int matriceA[][100], int matriceB[][100]);
  void Controler(int &n);

  cout << "Saisir la taille n de la matrice carrée : ";
  cin >> n;
  Controler(n);
  
  cout << endl << "Saisie de la matrice : " << endl;
  saisirMatrice(n, matriceA);

  transposerMatrice(n, matriceA, matriceB);
  
  cout << endl << "Matrice A : " << endl;
  afficherMatrice(matriceA, n);
  
  cout << endl << "Matrice B : " << endl;
  afficherMatrice(matriceB, n);

  return 0;
}
