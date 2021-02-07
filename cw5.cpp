// cw5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;


int main()
{
	float a, b, c;	//wsp. rownania
	float delta;
	float x1, x2;	//pierwiastki rownania

	cout << "Podaj wspolczynniki rownania a*x^2+b*x+c=0" << endl;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;

	if (a != 0)	//kontrola czy rownianie jest kwadratowe
	{
		delta = pow(b, 2) - 4 * a * c;

		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "Rownanie ma dwa pierwiastki" << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}

		if (delta == 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			cout << "Rownanie ma jeden pierwiastek" << endl;
			cout << "x1 = " << x1 << endl;
		}

		if (delta < 0)
		{
			cout << "Rownanie nie ma pierwiastkow rzeczywistych" << endl;
		}
	}

	else
	{
		cout << "Rownanie o podanych wspolczynnikach nie jest rownaniem kwadratowym" << endl;
	}

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
