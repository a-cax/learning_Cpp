// cw7.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
float a, b, c;  //deklaracja zmiennych
string kat(float a, float b, float c);   //deklaracja funkcji sprawdzajacej kat trojkata

int main()
{

    cout << "Podaj dlugosc boku a: ";
    cin >> a;
    cout << "Podaj dlugosc boku b: ";
    cin >> b;
    cout << "Podaj dlugosc boku c: ";
    cin >> c;

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)  //warunek zbudowania trojkata
    {
        cout << "Z podanych bokow nie da sie zbudowac trojkata" << endl;
    }
    else
    {
        if (a == b && a == c)   //warunek rownobocznosci
        {
            cout << "Z podanych bokow mozna zbudowac trojkat rownoboczny, " << kat(a,b,c) << endl;
        }
        else
        {
            if (a == b && a != c || a == c && a != b)   //warunek rownoramiennosci
            {
                cout << "Z podanych bokow mozna zbudowac trojkat rownoramienny, " << kat(a,b,c) << endl;
            }
            else
            {
                if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) //warunek prostokatnosci
                {
                    cout << "Z podanych bokow mozna zbudowac trojkat prostokatny" << endl;
                }
                else
                {
                    cout << "Z podanych bokow mozna zbudowac trojkat " << kat(a,b,c) << endl;
                }
            }
        }             
    }
}

string kat(float a, float b, float c)   //funckja sprawdzajaca typ kata w trojkacie
{
    string k;
    if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a)
    {
        k = "rozwartokatny";
    }
    else
    {
        k = "ostrokatny";
    }
    return k;
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
