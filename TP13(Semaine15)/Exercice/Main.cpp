#include <iostream>
#include "def_list.h"

using namespace std;

int main()
{
    ListeInt maListe;
    int choix,i;
    int position, valeur;

	InitList(maListe);
	for(i=0; i <=500; i++)
		AddQueue(maListe,3);
	
    do {
        
        cout << endl;
        cout << "  ____________________________________________" << endl;
        cout << " |____________________MENU____________________|" << endl;
		cout << " |                                            |" << endl; 
        cout << " | 1. Initialiser une nouvelle liste          |" << endl;
        cout << " | 2. Ajouter un élément en queue de liste    |" << endl;
        cout << " | 3. Supprimer un élément en tête de liste   |" << endl;
        cout << " | 4. Ajouter un élément en position donnée   |" << endl;
        cout << " | 5. Supprimer un élément en position donnée |" << endl;
        cout << " | 6. Récupérer le nombre d'éléments          |" << endl;
        cout << " | 7. Rechercher la position d'un élément     |" << endl;
        cout << " | 8. Vider complètement la liste             |" << endl;
        cout << " | 9. Afficher le contenu de la liste         |" << endl;
		cout << " | 10. Trier la liste                         |" << endl;
        cout << " | 11. Quitter                                |" << endl;
        cout << " |____________________________________________|" << endl << endl;
        
        cout << "  Entrer votre choix : ";
        cin >> choix;
        cout << endl;
		
        switch (choix) {
            case 1:
                InitList(maListe);
                cout << "  Liste bien initialisée !" << endl;
                break;
                
            case 2:
                cout << "  Entrer la valeur : ";
                cin >> valeur;
                cout << endl;
                
                AddQueue(maListe, valeur);
                break;
                
            case 3:
                SuppTete(maListe);
                break;
                
            case 4:
                cout << "  En quelle position ajouter l'élément ? : ";
                cin >> position;
                
                cout << "  Entrer la valeur : ";
                cin >> valeur;
                cout << endl;
                
                AddElement(maListe, position, valeur);
                break;
                
            case 5:
                cout << "  En quelle position se trouve l'élément ? : ";
                cin >> position;
                cout << endl;
                
                SuppElement(maListe, position);
                break;
                
            case 6:
                // Afficher la taille (gestion orthographique)
                cout << "  La liste contient " << Taille(maListe) << " élément";
                if (Taille(maListe) > 1 )
                    cout << "s" << endl << endl;
                // Fin de Taille
                break;
                
            case 7:
                cout << "  Quel élément recherchez vous ? : ";
                cin >> valeur;
                cout << endl;
                
                // Rechercher un élément dans la liste
                if (Rechercher(maListe, valeur) == -1) {
                    cout << "  Cet élément n'est pas dans la liste..." << endl << endl;
                } else {
                    cout << "  Place de l'élément : " << Rechercher(maListe, valeur) << endl << endl;
                }
                // Fin de Rechercher
                break;
                
                
            case 8:
                ViderListe(maListe);
                cout << "  Liste a été complétement vidée." << endl;
                break;
                
            case 9:
                Afficher(maListe);
                break;
                
            case 10:
				TrierListe(maListe);
				cout << "  La liste a bien été triée." << endl;
                break;

		    case 11:
				break;
            default:
                cout << "  Erreur de saisie..." << endl;
                break;
        }
        
    } while (choix != 11);
    
    cout << "  Au revoir..." << endl << endl;
    
    return 0;
    
}
