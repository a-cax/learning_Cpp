// cw1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <conio.h>
#include <cstdio>
#include <stddef.h>
#include <math.h>

const double pi = 3.14159265;
using namespace std;

int main()
{
                    //definicje zmiennych
    double a, b, c; 
    double gamma_stopnie, gamma_rad;
    double S;
                    //wartosci zmiennych
    cout << "Podaj a:";
    cin>>a;
    cout << "Podaj b:";
    cin>>b;
    cout << "Podaj kat gamma:";
    cin>>gamma_stopnie;
                    //obliczenia
    gamma_rad = gamma_stopnie*pi/180;
    c = sqrt(a * a + b * b - 2 * a * b * cos(gamma_rad));
    S = a * b * sin(gamma_rad) / 2;
    cout<<"Trojkat o bokach a = "<<a<<", b = "<<b<<" i kacie gamma = "<<gamma_stopnie<<"st"<<endl;
    cout<<"ma bok c = "<<c<<" i powierzchnie S = "<<S<<endl;
    _getch();
    return 0;
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
