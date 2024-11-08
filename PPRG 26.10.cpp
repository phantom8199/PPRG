//                                      ZADANIE 2.1

//#include <iostream>
//using namespace std;
//
//int obliczenieszeregu(int n) {
//    int wynik = 0;
//    
//    for (int i = 1; i <= n; i++) {
//        int sumowanie = 0;
//        for (int j = 1; j <= i; j++) {
//            sumowanie += j; 
//        }
//
//        wynik += sumowanie;
//    }
//
//    return wynik;
//}
//
//int main() {
//    int n;
//    cout << "Podaj dlugosc szeregu: ";
//    cin >> n;
//    int result = obliczenieszeregu(n);
//    cout << "Suma szeregu: " << result << endl;
//    return 0;
//}


//                                      ZADANIE 2.2
// 
    //                                      A)
        /*
    #include <iostream>
    using namespace std;

    int main() {
        int a, b;
        cout << "Podaj liczbe a: ";
        cin >> a;
            cout << "Podaj liczbe b: ";
            cin >> b;
        cout << "Liczba a wynosi: " << a << "\nLiczba b wynosi: " << b << endl;

        return 0;

    }*/

    //                                      B)
        /*
    #include <iostream>
    using namespace std;

    int main() {
        int a;

        cout << "Wpisz dlugosc a: ";
        cin >> a;

        for (int i = 0; i < a; i++) {
            cout << "*";
        }
        return 0;
        }
    */

    //                                      C)

        /*
        #include <iostream>
        using namespace std;

        int main() {
        int b;

        cout << "Wpisz dlugosc b: ";
        cin >> b;

        for (int i = 0; i < b; i++) {
        cout << "*\n";
        }
        return 0;
        }
    */

    //                                      D)

    /*
    #include <iostream>
    using namespace std;

    int main() {
    int sz, wys;

    cout << "Wpisz szerokosc: ";
    cin >> sz;
    cout << "Wpisz wysokosc: ";
    cin >> wys;

        for (int i = 0; i < wys; i++) {
            for (int j = 0; j < sz; j++) {
                cout << "*";
            }
            cout << endl;
        }
        return 0;
     }
    */

    //                                      E)

    /*
    #include <iostream>
    using namespace std;

    int main() {
    
    int sz, wys;

    cout << "Wpisz szerokosc prostokata: ";
    cin >> sz;
    cout << "Wpisz wysokosc prostokata: ";
    cin >> wys;

    for (int i = 0; i < wys; i++) {
        for (int j = 0; j < sz; j++) {
            if (i == 0 || i == wys - 1 || j == 0 || j == sz - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
*/

    //                                      F)
    /*

    int a;
    cout << "Wpisz bok trojkata prostokatnego rownoramiennego: ";
    cin >> a;
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

    return 0;
    }
    */
//                                          G)
/*
    #include <iostream>
    using namespace std;

    int main() {
    int a;

    cout << "Wpisz bok trojkata prostokatnego rownoramiennego: ";
    cin >> a;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int k = 0; k < a - i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
    */


//                                       ZADANIE 2.3

/*
#include <iostream>
using namespace std;

int main() {
    int miesiac;
    cout << "Podaj liczbe od 1 do 12.\n";
    cin >> miesiac;
    switch (miesiac)
    {
    case 1:
        cout << "Styczen";
        break;
    case 2:
        cout << "Luty";
        break;
    case 3:
        cout << "Marzec";
        break;
    case 4:
        cout << "Kwiecien";
        break;
    case 5:
        cout << "Maj";
        break;
    case 6:
        cout << "Czerwiec";
        break;
    case 7:
        cout << "Lipiec";
        break;
    case 8:
        cout << "Sierpien";
        break;
    case 9:
        cout << "Wrzesien";
        break;
    case 10:
        cout << "Pazdziernik";
        break;
    case 11:
        cout << "Listopad";
        break;
    case 12:
        cout << "Grudzien";
        break;
    default:
        cout << "Wybrales liczbe spoza zakresu";
        return 0;
    }
    cout << endl;

    int iloscdni = miesiac;
    switch (iloscdni)
    {
    case 1:
        cout << "Ten miesiac ma 31 dni";
        break;
    case 2:
        cout << "Ten miesiac ma 29 dni";
        break;
    case 3:
        cout << "Ten miesiac ma 31 dni";
        break;
    case 4:
        cout << "Ten miesiac ma 30 dni";
        break;
    case 5:
        cout << "Ten miesiac ma 31 dni";
        break;
    case 6:
        cout << "Ten miesiac ma 30 dni";
        break;
    case 7:
        cout << "Ten miesiac ma 31 dni";
        break;
    case 8:
        cout << "Ten miesiac ma 31 dni";
        break;
    case 9:
        cout << "Ten miesiac ma 30 dni";
        break;
    case 10:
        cout << "Ten miesiac ma 31 dni";
        break;
    case 11:
        cout << "Ten miesiac ma 30 dni";
        break;
    case 12:
        cout << "Ten miesiac ma 31 dni";
        break;
    }
    cout << endl;
    
    if (iloscdni >= 4 && iloscdni <= 9)
        cout << "Pogoda w tym miesiacu jest sloneczna";
    else 
        cout << "Pogoda w tym miesiacu jest pochmurna";

    return 0;
}

*/