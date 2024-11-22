//																	ZADANIE 3.1
/*

#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cout << "Oblicze sume, roznice, iloczyn oraz iloraz dwoch podanych przez Ciebie liczb." << endl 
		<< "Podaj liczbe X: ";
	cin >> x;
	cout << "Podaj liczbe Y: ";
	cin >> y;
	cout << "Suma wynosi: " << x + y << endl
		<< "Roznica wynosi: " << x - y << endl
		<< "Iloczyn wynosi: " << x * y << endl
		<< "Iloraz wynosi: " << x / y << endl;
	return 0;

}
*/


//																	ZADANIE 3.2
/*
#include <iostream>
using namespace std;

int main() 
{
	char znak;

	cout << "Program bedzie wyswietlac znaki dopoki nie zostanie wpisany znak \"t\" " << endl;

	do {
		cin >> znak;
		cout << "Wpisany znak: " << znak << endl;
	} while (znak != 't');

	cout << "Wpisano znak \"t\". Program zostal zakonczony" << endl;

	return 0;
}
*/

//																	ZADANIE 3.3
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Podaj wartosci a, b oraz c aby rozwiazac rownanie kwadratowego w postaci ax^2 + bx + c = 0" << endl;
    cout << "Podaj wartosc a: ";
    cin >> a;
    cout << "Podaj wartosc b: ";
    cin >> b;
    cout << "Podaj wartosc c: ";
    cin >> c;
    cout << "Rownanie po wpisaniu wartosci a, b oraz c wyglada nastepujaco: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    if (a == 0) {
        if (b != 0) {
            double x = -c / b;
            cout << "Rownanie liniowe, pierwiastek wynosi: x = " << x << endl;
        }
        else {
            if (c == 0) {
                cout << "Rownanie ma nieskonczona ilosc rozwiazan" << endl;
            }
            else {
                cout << "Brak rozwiazan";
            }
        }
        return 0;
    }
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Rownanie ma dwa pierwiastki rzeczywiste: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "Rownanie ma jeden pierwiastek rzeczywisty:" << endl;
        cout << "x = " << x;
    } 
    // Re -> rzeczywiste, Im -> urojone
    else {
        double Re = -b / (2 * a);
        double Im = sqrt(-delta) / (2 * a);
        cout << "Rownanie ma dwa pierwiastki zespolone:" << endl;
        cout << "x1 = " << Re << " + " << Im << "i" << endl;
        cout << "x2 = " << Re << " - " << Im << "i";
    }

    return 0;
}
*/
//																	ZADANIE 3.4

/*
#include <iostream>
using namespace std;

int main() 
{
    unsigned int wiersze;
    cout << "Podaj liczbe wierszy trojkata Pascala: ";
    cin >> wiersze;
    if (wiersze == 0) {
        cout << "Liczba wierszy powinna byc wieksza od 0. Koniec programu.";
        return 0;
    }
    signed int trojkat[20][20]; //przy wiekszym limicie trojkat jest niewidoczny a zalezalo mi aby
                                // ukladal sie w mniej wiecej rowny trojkat

    for (unsigned int i = 0; i < wiersze; i++) {
        for (unsigned int space = 0; space < wiersze - i - 1; space++) {
            cout << " ";
        }

        for (unsigned int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                trojkat[i][j] = 1;
            }
            else {
                trojkat[i][j] = trojkat[i - 1][j - 1] + trojkat[i - 1][j];
            }
            cout << trojkat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/