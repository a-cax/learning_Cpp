// cw4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
const double pi = 3.14159265;
float r;
float p_kola(float r);
float oblicz_wzor1(float r);
float oblicz_wzor2(float r);

int main()
{
    cout << "Podaj r: ";
    cin >> r;
    float wynik1, wynik2, wynik3;
    wynik1 = oblicz_wzor1(r);
    wynik2 = oblicz_wzor2(r);
    wynik3 = wynik1 + wynik2;
    cout << "Pole pierwszej figury = " << wynik1 << endl;
    cout << "Pole drugiej figury = " << wynik2 << endl;
    cout << "Pole obu figur = " << wynik3 << endl;
    _getch();
    return 0;
}

//definicje zmiennych
float p_kola(float r)
{           //funkcja obliczajaca jeden element sumy
    float e;
    e = pi * r * r;
    return e;
}

float oblicz_wzor1(float r)
{
    float w;
    //obliczenie sumy elementow
    w = p_kola(r)-p_kola(r/2)+2*p_kola(r/4);
    return w;
}

float oblicz_wzor2(float r)
{
    float w;
    //obliczenie sumy elementow
    w = p_kola(r) - 2*p_kola(r / 2) + 4 * p_kola(r / 4)-6*p_kola(r/8);
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
