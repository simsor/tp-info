#include <iostream>
using namespace std;

int main()
{
    int cote, n, i;
    int nombre, nombre_max, nombre_milieu;
    bool milieu; // Détermine si on est passé par le milieu

    cout << "Entrer un nombre n: ";
    cin >> n;

    cote = 2 * n + 1;
    nombre = 2*n;
    nombre_max = 2*n;
    milieu = false;
    nombre_milieu = n;

    DessineCarre();

    return 0;
}
