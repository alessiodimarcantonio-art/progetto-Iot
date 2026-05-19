/*Scrivi un programma che:
- Dichiara una matrice int voti[3][3] e la inizializza con i valori a tua scelta
- Stampa la matrice come tabella
- Stampa solo gli elementi della diagonale principale (dove i == j)
- Stampa il valore massimo
  -  pro: stampa gli indici del valore massimo*/
#include <iostream>
using namespace std;
int main()
{
    int VAL = 0;
    int MAX = 0;
    int scelta;
    int voti[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "inserisci valori nella matrice" << endl;
            cin >> voti[i][j];
        }
    }
    do
    {
        cout << "===MATRICI===" << endl;
        cout << "1. visualizza matrice" << endl;
        cout << "2. visuaizza diagonale matrice" << endl;
        cout << "3. visualizza valore maggiore" << endl;
        cin >> scelta;
        switch (scelta)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << voti[i][j] << "\t";
                }
                cout << endl;
            }
            break;

        case 2:
            for (int i = 0; i < 3; i++)
            {
                cout << "la diagonale e formata da: " << voti[i][i] << endl;
            }
            break;
        case 3:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    VAL = voti[i][j];
                    if (VAL > MAX)
                    {
                        MAX = VAL;
                    }
                }
            }
            cout << "Il valore massimo e' :" << MAX << endl;
            break;
        }
    } while (scelta != 0);
    return 0;
}
