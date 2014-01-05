#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nom;
    int choix;
    void entrerMOT( string& );
    int nbr_voyelles( string );
    bool estPalindrome( string );
    string majuscule( string );
    
    do {
        
        cout << "1. Saisir un nom et afficher le nombre de voyelles. " << endl;
        cout << "2. Saisir un nom et verifier qu'il s'agit  d'un palindrome." << endl;
        cout << "3. Saisir un nom et mettre toutes les lettres en majuscules." << endl;
        cout << "4. Quitter" << endl;
        
        cout << "Entrer votre choix : ";
        cin >> choix;
        
        switch (choix) {
            case 1:
                entrerMOT(nom);
                cout << "Nombre de voyelles : " << nbr_voyelles(nom) << endl;
                break;
                
            case 2:
                entrerMOT(nom);
                
                if (estPalindrome(nom)) {
                    cout << nom << " est un palindrome." << endl;
                }
                else {
                    cout << nom << " n'est pas un palindrome." << endl;
                }
                break;
                
            case 3:
                entrerMOT(nom);
                cout << "Le mot en majuscule : " << majuscule(nom) << endl;
                break;
                
            case 4:
                break;
                
                
            default:
                cout << "Mauvaise entrée..." << endl;
                break;
        }
        
    } while (choix != 4);
    
    cout << "Au revoir..." << endl;
    
}

