
/*Il comune di una città vuole analizzare le temperature medie registrate durante l'ultima settimana.

Scrivi un programma in C++ che permetta di visualizzare i dati e calcolare statistiche di base.

Dichiarazione dati: Nel main (o globalmente), dichiara un array di numeri decimali (float o double) di dimensione 7, rappresentante i giorni della settimana. Inizializza l'array con valori a tua scelta già in fase di dichiarazione.

Sviluppo Funzioni:
Crea una funzione (es. mostraTemperature) che riceva l'array come parametro e ne stampi a video tutti i valori utilizzando un ciclo for per lo scorrimento. Poiché la funzione deve solo stampare, il suo tipo di ritorno sarà void.
Crea una funzione (es. calcolaMedia) che riceva l'array come parametro, calcoli la somma di tutti gli elementi e restituisca come valore di ritorno la media aritmetica.
Crea una funzione (es. trovaElemento) che riceva l'array ed una temperatura come parametro e restituisca l’indice dell’emento nell’array, se trovato, altrimenti -1 se non trovato.

Menu nel Main: Implementa un menu di scelta all'interno di un ciclo (es. do-while) che utilizzi l'istruzione switch. Il menu deve offrire le seguenti opzioni:
1: Stampa l'elenco delle temperature (richiama la prima funzione).
2: Calcola e visualizza la media settimanale (richiama la seconda funzione e ne stampa il risultato).
0: Esci dal programma.


Suggerimenti:

Ricordati di inserire i prototipi delle funzioni prima del main.*/

#include <iostream>
using namespace std;
void mostraTemperature(float array[])
{

    for (int i = 0; i < 7; i++)
    {
        cout << "Le temperature e' : " << array[i] << "Gradi" << endl;
    }
}
float calcolaMedia(float array[])
{
    float somma = 0.0;
    float media = 0.0;
    for (int i = 0; i < 7; i++)
    {
        somma = somma + array[i];
    }
    media = somma / 7;
    return media;
}
int trovaElemento(float array[], float valore)
{
    for (int i = 0; i < 7; i++)
    {
        if (array[i] == valore)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    float array[7] = {18.6, 20.2, 19.4, 17.8, 21.5, 22.4, 23.3};
    int scelta = 0;
    float m;
    do
    {
        cout << "===LE TEMPERATURE DEI GIORNI DELLA SETTIMANA===" << endl;
        cout << "2. Calcola la media" << endl;
        cout << "1. Mostra le temperature" << endl;
        cout << "0. Arrivederci!" << endl;
        cin >> scelta;

        switch (scelta)
        {
        case 0:
            cout << "Arrivederci!" << endl;
            break;

        case 1:
            mostraTemperature(array);
            break;

        case 2:
            m = calcolaMedia(array);
            cout << "La media e': " << m << " Gradi" << endl;
            break;
        }

    } while (scelta != 0);
}