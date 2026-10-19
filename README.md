File Comparison – C++
📌 Opis projektu

File Comparison to program napisany w języku C++, który porównuje zawartość dwóch plików tekstowych. Odczytuje dane linia po linii, a następnie dzieli je na trzy grupy:

Elementy występujące tylko w pierwszym pliku.
Elementy występujące tylko w drugim pliku.
Elementy wspólne dla obu plików.

Wyniki porównania zapisywane są do trzech osobnych plików tekstowych.

✨ Funkcjonalności
📂 Wczytywanie danych z dwóch plików tekstowych.
🔍 Porównywanie zawartości plików.
📄 Wyszukiwanie elementów występujących tylko w pierwszym pliku.
📄 Wyszukiwanie elementów występujących tylko w drugim pliku.
🔗 Wyszukiwanie unikalnych elementów wspólnych dla obu plików.
💾 Zapisywanie wyników do osobnych plików tekstowych.
⚠️ Informowanie użytkownika o problemach z otwarciem pliku wejściowego.
🛠️ Technologie
Język: C++
Biblioteki standardowe:
iostream
fstream
string
vector
algorithm
📁 Struktura projektu
.
├── main.cpp
├── plik1.txt
├── plik2.txt
├── pierwszy.txt
├── drugi.txt
├── wspolny.txt
└── README.md


Pliki wejściowe:

plik1.txt – pierwszy plik tekstowy.
plik2.txt – drugi plik tekstowy.

Pliki wynikowe:

pierwszy.txt – elementy występujące tylko w pierwszym pliku.
drugi.txt – elementy występujące tylko w drugim pliku.
wspolny.txt – elementy wspólne dla obu plików.

Pliki wynikowe są tworzone lub nadpisywane przez program.

🚀 Jak uruchomić program?
1. Sklonuj repozytorium
git clone ADRES_TWOJEGO_REPOZYTORIUM
cd NAZWA_REPOZYTORIUM

Zastąp powyższe wartości adresem i nazwą swojego repozytorium.

2. Przygotuj pliki wejściowe

Utwórz pliki plik1.txt i plik2.txt w katalogu roboczym programu.

Przykładowa zawartość pliku plik1.txt:

jabłko
gruszka
banan
kiwi


Przykładowa zawartość pliku plik2.txt:

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

Uwaga: Pliki wejściowe muszą znajdować się w katalogu roboczym, z którego uruchamiasz program.
📊 Przykładowe wyniki

Dla podanych wcześniej danych program utworzy trzy pliki wynikowe.

pierwszy.txt

Elementy występujące tylko w pierwszym pliku:

jabłko
kiwi

drugi.txt

Elementy występujące tylko w drugim pliku:

pomarańcza
śliwka

wspolny.txt

Elementy występujące w obu plikach:

gruszka
banan


Po zakończeniu działania programu w konsoli wyświetli się komunikat:

Gotowe. Utworzono 3 pliki wynikowe.

⚙️ Jak działa program?

Program wykorzystuje klasę Checker, która odpowiada za odczytywanie, porównywanie i zapisywanie danych.

Metoda	Opis
wczytajPlik()	Odczytuje plik tekstowy i zapisuje jego linie w wektorze.
tylkoW1()	Zwraca elementy z pierwszego pliku, których nie ma w drugim.
tylkoW2()	Zwraca elementy z drugiego pliku, których nie ma w pierwszym.
wspolne()	Zwraca unikalne elementy obecne w obu plikach.
zapiszPlik()	Zapisuje wyniki do pliku tekstowego.
porownaj()	Uruchamia cały proces porównywania plików.
main()	Tworzy obiekt klasy Checker i rozpoczyna działanie programu.
📝 Uwagi
Porównywanie odbywa się na podstawie całych linii tekstu.
Wielkość liter ma znaczenie. Przykładowo Kot i kot są traktowane jako różne elementy.
W przypadku elementów wspólnych duplikaty w wyniku są usuwane.
W metodach tylkoW1() i tylkoW2() powtarzające się linie mogą pojawić się wielokrotnie, jeśli występują w odpowiednim pliku wejściowym.
Program wymaga, aby pliki wejściowe były dostępne pod określonymi nazwami.
Pliki wynikowe o tych samych nazwach są nadpisywane podczas kolejnego uruchomienia.
👨‍💻 Autor

Projekt edukacyjny napisany w języku C++.
