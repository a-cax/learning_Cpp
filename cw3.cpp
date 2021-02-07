// cw3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
const double pi = 3.14159265;
float x, y;
float element(float x, float y);
float oblicz_wzor(float x, float y);

int main()
{
    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;
    float wynik;
    wynik = oblicz_wzor(x, y);
    cout << "Wynik sumy = " << wynik << endl;
    _getch();
    return 0;
}

//definicje zmiennych
float element(float a, float b)
{           //funkcja obliczajace jeden element sumy
    float e;
    e = a * x * x * sin(pi / (abs(y) + 1)) / sqrt(abs(y) + b);
    return e;
}

float oblicz_wzor(float x, float y)
{
    float w;
    //obliczenie sumy elementow
    w = element(1, 0.5) + element(4, 2) + element(5, 2.5) + element(10, 5);
    return w;
}
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
