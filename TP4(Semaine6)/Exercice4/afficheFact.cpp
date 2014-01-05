#include <iostream>
using namespace std;
int main()
{
    int n;
    char encore;
    int factoriel(int);

    encore = 'o';
    do
    {
        if (encore == 'o')
        {
            cout << "Entrer un entier: ";
            cin >> n;
            if (n >= 0)
            {
                cout << n << "! = " << factoriel(n);
            }
            else
            {
                cout << "Le nombre doit être positif.";
            }
        }

        cout << endl << "Encore ? ";
        cin >> encore;
    } while (encore == 'o');

    cout << endl;
    return 0;
}
