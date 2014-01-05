#include <iostream>

using namespace std;

int main()
{
    int tab_note[30][6];
    int nbr_note[30];
    int i, j, choix, nbr_eleve;
    char continuer;
    void afficher_tableau(int tab_note[30][6], int nbr_note[30], int nbr_eleve);
    void afficher_moyenne(int tab_note[30][6], int nbr_note[30], int nbr_eleve);
    void afficher_moyenne_classe(int tab_note[30][6], int nbr_note[30], int nbr_eleve);
    void controle_yes_no( char& continuer);
    void controle_note( int& );
    
    i = 0;
    nbr_eleve = 0;
    
    do {
        
        j = 0;
        cout << "Entrer l'eleve numero " << i + 1 << endl;
        
        nbr_eleve = nbr_eleve + 1; // Permet de savoir combien d'élèves ont étè entrées
        
        do {
            
            cout << "Entrer la note " << j + 1 << " de l'eleve : ";
            cin >> tab_note[i][j];
            controle_note(tab_note[i][j]);
            
            // incrementera le nombre de note de note pour cet élève dans le tableau
            j = j + 1;
            nbr_note[i] = j;
            
            cout << "Saisir une autre note? (o/n) : ";
            cin >> continuer;
            controle_yes_no(continuer);
            cout << endl;
            
            
        } while (continuer == 'o');
        // Sort de la boucle s'il ne veut plus rentrer de notes pour l'élève
        
        i = i + 1;
        
        cout << "Entrer un autre eleve ? (o/n) : ";
        cin >> continuer;
        controle_yes_no(continuer);
        cout << endl;
        
        
        
    } while (continuer == 'o');
    // Sort de la boucle s'il ne veut plus rentrer d'élèves
    
    do {
        cout << endl << endl;
        cout << "////// MENU \\\\\\" << endl << endl;
        
        cout << "1. Afficher le tableau complet de notes" << endl;
        cout << "2. Afficher la moyenne d'un eleve" << endl;
        cout << "3. Afficher la moyenne de la classe" << endl;
        cout << "4. Quitter" << endl << endl;
        
        cout << "Saisir votre choix : ";
        cin >> choix;
        cout << endl;
        
        switch (choix) {
            case 1:
                afficher_tableau(tab_note, nbr_note, nbr_eleve);
                break;
                
            case 2:
                afficher_moyenne(tab_note, nbr_note, nbr_eleve);
                break;
                
            case 3:
                afficher_moyenne_classe(tab_note, nbr_note, nbr_eleve);
                break;
                
            case 4:
                break;
                
            default:
                cout << "Erreur de saisi.";
                break;
                
        }
        
    } while ( choix != 4 );
    // Sort de la boucle s'il a choisi de quitter

    return 0;
    
}