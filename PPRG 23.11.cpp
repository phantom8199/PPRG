//											ZADANIE 4.1

/*
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Podaj liczbe elementow w tablicy: ";
    cin >> n;

    int array[50];
    cout << "Podaj " << n << " liczb calkowitych:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    int biggElement = array[0];
    for (int i = 1; i < n; i++) 
    {
        if (array[i] > biggElement) 
        {
            biggElement = array[i];
        }
    }

    cout << "Najwiekszy element w tablicy to: " << biggElement << endl;

    return 0;
}
*/


//											ZADANIE 4.2

/*
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Podaj liczbe elementow w tablicy liczb calkowitych: ";
    cin >> n;

    int array[50];
    cout << "Podaj " << n << " liczb calkowitych:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    int maxFrequency = 0;
    int mostFrequent = array[0];

    for (int i = 0; i < n; i++) 
    {
        int count = 0;

        for (int j = 0; j < n; j++) 
        {
            if (array[i] == array[j]) 
            {
                count++;
            }
        }

        if (count > maxFrequency) 
        {
            maxFrequency = count;
            mostFrequent = array[i];
        }
    }
    cout << "Najczesciej wystepujacy element w tablicy liczb calkowitych to: " << mostFrequent << endl;
    return 0;
}
*/

//											ZADANIE 4.3
/*

#include <iostream>
using namespace std;

int main() {
    const int wiersze = 10;
    const int kolumny = 10;
    int tablica[wiersze][kolumny];

    for (int i = 0; i < wiersze; i++) 
    {
        for (int j = 0; j < kolumny; j++) //Zakładam, że wyniki liczone będą według numerów wierszy/kolumn (0-9) a nie miejsc w wierszu/kolumnie (tj. 1-10)
        {
            if (j == 0) 
            {
                // Pierwsza kolumna
                tablica[i][j] = i;
            }
            else if (j == 1)
            {
                // Druga kolumna - Suma wynika z liczby po lewej oraz liczby nad finalnym wynikiem sumy
                tablica[i][j] = (i * (i + 1)) / 2;
            }
            else if (j == 2)
            {
                // Trzecia kolumna
                tablica[i][j] = i * i;
            }
            else if (j == 3)
            {
                // Czwarta kolumna
                tablica[i][j] = i + j;
            }
            else if (j == 4)
            {
                // Piąta kolumna
                tablica[i][j] = i - j;
            }
            else 
            {
                // Pozostałe kolumny
                tablica[i][j] = 0;
            }
        }
    }
    cout << "Tablica 10x10:" << endl;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) 
        {
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
*/