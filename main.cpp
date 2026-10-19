
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Checker
{
private:
    vector<string> tablica1;
    vector<string> tablica2;

public:
    // Wczytanie pliku do tablicy (vector)
    void wczytajPlik(string nazwa, vector<string>& tablica)
    {
        ifstream plik(nazwa);
        string tekst;

        if (!plik.is_open())
        {
            cout << "Nie mozna otworzyc pliku: " << nazwa << endl;
            return;
        }

        while (getline(plik, tekst))
        {
            tablica.push_back(tekst);
        }

        plik.close();
    }

    // Elementy tylko z pierwszego pliku
    vector<string> tylkoW1()
    {
        vector<string> wynik;

        for (int i = 0; i < tablica1.size(); i++)
        {
            if (find(tablica2.begin(), tablica2.end(),
                     tablica1[i]) == tablica2.end())
            {
                wynik.push_back(tablica1[i]);
            }
        }

        return wynik;
    }

    // Elementy tylko z drugiego pliku
    vector<string> tylkoW2()
    {
        vector<string> wynik;

        for (int i = 0; i < tablica2.size(); i++)
        {
            if (find(tablica1.begin(), tablica1.end(),
                     tablica2[i]) == tablica1.end())
            {
                wynik.push_back(tablica2[i]);
            }
        }

        return wynik;
    }

    // Elementy wspolne
    vector<string> wspolne()
    {
        vector<string> wynik;

        for (int i = 0; i < tablica1.size(); i++)
        {
            if (find(tablica2.begin(), tablica2.end(),
                     tablica1[i]) != tablica2.end())
            {
                if (find(wynik.begin(), wynik.end(),
                         tablica1[i]) == wynik.end())
                {
                    wynik.push_back(tablica1[i]);
                }
            }
        }

        return wynik;
    }

    // Zapis wyniku do pliku
    void zapiszPlik(string nazwa, vector<string> dane)
    {
        ofstream plik(nazwa);

        for (int i = 0; i < dane.size(); i++)
        {
            plik << dane[i] << endl;
        }

        plik.close();
    }

    // Glowna metoda porownujaca
    void porownaj()
    {
        wczytajPlik("plik1.txt", tablica1);
        wczytajPlik("plik2.txt", tablica2);

        zapiszPlik("pierwszy.txt", tylkoW1());
        zapiszPlik("drugi.txt", tylkoW2());
        zapiszPlik("wspolny.txt", wspolne());

        cout << "Gotowe Utworzono 3 pliki wynikowe." << endl;
    }
};

int main()
{
    Checker obiekt;
    obiekt.porownaj();

    return 0;
}
