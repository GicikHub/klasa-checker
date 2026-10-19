File Comparison – C++
Opis projektu

Program napisany w języku C++, który porównuje zawartość dwóch plików tekstowych. Odczytuje dane linia po linii, a następnie rozdziela je na trzy grupy: elementy występujące tylko w pierwszym pliku, elementy występujące tylko w drugim pliku oraz elementy wspólne dla obu plików.

Wyniki porównania zapisywane są do trzech osobnych plików tekstowych.

Funkcjonalności
Wczytywanie danych z dwóch plików tekstowych.
Porównywanie zawartości plików.
Wyszukiwanie elementów występujących tylko w pierwszym pliku.
Wyszukiwanie elementów występujących tylko w drugim pliku.
Wyszukiwanie unikalnych elementów wspólnych dla obu plików.
Zapisywanie wyników do osobnych plików tekstowych.
Informowanie użytkownika o problemie z otwarciem pliku wejściowego.
Technologie
Język: C++
Biblioteki standardowe: iostream, fstream, string, vector, algorithm
Struktura projektu
.
├── main.cpp
├── plik1.txt
├── plik2.txt
├── pierwszy.txt
├── drugi.txt
├── wspolny.txt
└── README.md


Pliki plik1.txt i plik2.txt są plikami wejściowymi. Trzy pozostałe pliki wynikowe są tworzone przez program.

Jak uruchomić program?
1. Sklonuj repozytorium
git clone ADRES_TWOJEGO_REPOZYTORIUM
cd NAZWA_REPOZYTORIUM


Zastąp powyższe wartości adresem i nazwą swojego repozytorium.

2. Przygotuj pliki wejściowe

Utwórz pliki plik1.txt i plik2.txt w katalogu roboczym programu i wpisz do nich przykładowe dane.

plik1.txt

jabłko
gruszka
banan
kiwi


plik2.txt

gruszka
banan
pomarańcza
śliwka

3. Skompiluj program

Jeśli korzystasz z kompilatora g++, wykonaj polecenie:

g++ main.cpp -o checker

4. Uruchom program

Linux / macOS:

./checker


Windows:

checker.exe


Pliki wejściowe muszą znajdować się w katalogu roboczym, z którego uruchamiasz program.

Przykładowe wyniki

Dla podanych wcześniej danych program utworzy trzy pliki.

pierwszy.txt – elementy występujące tylko w pierwszym pliku:

jabłko
kiwi


drugi.txt – elementy występujące tylko w drugim pliku:

pomarańcza
śliwka


wspolny.txt – elementy występujące w obu plikach:

gruszka
banan


Po zakończeniu programu w konsoli wyświetli się komunikat:

Gotowe Utworzono 3 pliki wynikowe.

Jak działa program?

Program wykorzystuje klasę Checker, która odpowiada za odczytywanie, porównywanie i zapisywanie danych.

wczytajPlik() – odczytuje plik tekstowy i zapisuje jego linie w wektorze.
tylkoW1() – zwraca elementy z pierwszego pliku, których nie ma w drugim.
tylkoW2() – zwraca elementy z drugiego pliku, których nie ma w pierwszym.
wspolne() – zwraca unikalne elementy obecne w obu plikach.
zapiszPlik() – zapisuje otrzymane wyniki do pliku tekstowego.
porownaj() – uruchamia cały proces porównywania.
main() – tworzy obiekt klasy Checker i rozpoczyna działanie programu.
Uwagi
Porównywanie odbywa się na podstawie całych linii tekstu.
Wielkość liter ma znaczenie, np. Kot i kot są traktowane jako różne elementy.
W przypadku elementów wspólnych duplikaty w wyniku są usuwane.
W metodach tylkoW1() i tylkoW2() powtarzające się linie mogą pojawić się wielokrotnie, jeśli występują w odpowiednim pliku wejściowym.
Program wymaga, aby pliki wejściowe były dostępne pod określonymi nazwami.
Pliki wynikowe o tych samych nazwach są nadpisywane podczas kolejnego uruchomienia.
Autor

Projekt edukacyjny napisany w języku C++.
