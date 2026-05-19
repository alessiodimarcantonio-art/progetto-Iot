#include <iostream>
#include <string>
using namespace std;

const int MAX_STANZE = 10;
const float SOGLIA_MAX = 28.0;
const float SOGLIA_MIN = 16.0;

// Dati globali (per ora hardcoded)
string nomi[MAX_STANZE] = {"Cucina", "Salotto", "Camera", "Bagno", "Studio"};
float temp[MAX_STANZE] = {22.5, 21.0, 19.8, 24.3, 20.1};
int n = 5;

// === FUNZIONI DA IMPLEMENTARE ===
void aggiungiStanza(string nomi[], float temp[], int *n)
{
    string stanza;
    float temperatura;
    cout << "Dai il nome alla nuova stanza : " << endl;
    cin >> stanza;
    cout << "Aggiungi temperatura: " << endl;
    cin >> temperatura;
    if (stanza.empty())
    {
        cout << "Nome non dichiarato" << endl;
    }
    else
    {
        if (*n >= MAX_STANZE)
        {
            cout << "Troppe stanze dichiarate" << endl;
        }
        else
        {
            nomi[*n] = stanza;
            temp[*n] = temperatura;
            (*n)++;
            cout << "Stanza aggiunta" << endl;
        }
    }
}
void visualizzaTemperature(string nomi[], float temp[], int *n)
{

    // TODO: stampa ogni stanza con la sua temperatura

    for (int i = 0; i < 5; i++)
    {
        cout << nomi[i] << " : " << temp[i] << " °C" << endl;
    }
}
int calcolaMedia(float temp[], int n)
{
    cout << "Calcola la media: " << endl;
    float somma = 0;
    float media = 0;
    for (int i = 0; i < n; i++)
    {
        somma = somma + temp[i];
    }
    media = somma / n;
    cout << "La media e' :" << media << endl;
    return media;
}
int valoreMax(int n, float temp[])
{
    cout << "Trova il valore massimo :" << endl;
    int pos_max = 0;
    float n_max = temp[0];
    for (int i = 0; i < n; i++)
    {
        if (temp[i] > n_max)
        {
            n_max = temp[i];
            pos_max = i;
        }
    }
    return pos_max;
}
void eliminaStanzaPerPosizione(int *n, string nomi[], float temp [], string elimina)
{
    int pos = 0;
    cout<<"inserisci la posizione del numero da eliminare"<<endl;
    cin>> pos;
    for (int i = pos; i <= pos -2; i++){
        

    
    int array [pos];
    int array [pos] =  array [pos + 1];
    }


    
}
int main()
{
    int i_max;
    string nome_stanza;
    float temp_stanza;
    int scelta = 0;
    do
    {
        cout << "\n=== PROGETTO IOT: TEMPERATURE CASA ===" << endl;
        cout << "5. Elimina stanza" << endl;
        cout << "4. Aggiungi stanza" << endl;
        cout << "3. Trova la posizione del valore massimo" << endl;
        cout << "2. Calcola la media" << endl;
        cout << "1. Visualizza stanze e temperature" << endl;
        cout << "0. Esci" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        // TODO: Scrivi qui lo switch con le seguenti caratteristiche:
        // 1: richiama la funzione visualizzaTemperature con i giusti input
        // 0: stampa di saluto
        // default: messaggio di errore

        switch (scelta)
        {
        case 4:
            aggiungiStanza(nomi, temp, &n);
            break;

        case 3:
            i_max = valoreMax(n, temp);
            cout << "Il valore massimo e' :" << i_max << endl;
            break;

        case 2:
            calcolaMedia(temp, n);
            break;

        case 1:
            visualizzaTemperature(nomi, temp, &n);
            break;

        case 0:
            cout << "Arrivederci!" << endl;
            break;

        default:
            cout << "Errore" << endl;
            break;
        }

    } while (scelta != 0);

    return 0;
}