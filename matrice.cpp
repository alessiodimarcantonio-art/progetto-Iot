/*Scrivi un programma che:
- Dichiara una matrice int voti[3][3] e la inizializza con i valori a tua scelta
- Stampa la matrice come tabella
- Stampa solo gli elementi della diagonale principale (dove i == j)
- Stampa il valore massimo
  -  pro: stampa gli indici del valore massimo
  */

#include <iostream>
using namespace std;
int main()
{
    int scelta;
        int max = 0;
        int val = 0;
        int matrice[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "inserisci valori nella matrice" << endl;
                cin >> matrice[i][j];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrice[i][j] << "\t";
            }
            cout << endl;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == j)
                {
                    cout << "la diagonale e' : " << matrice[i][j] << endl;
                }
            }
        }
        for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        VAL = matrice [i] [j];
                        if (VAL > MAX)
                        {
                            MAX = VAL;
                        }
                    }
                }
    return 0;
}
