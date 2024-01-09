#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{   string imie, nazwisko, numer;
    fstream plik;

    plik.open("wizytowka.txt", ios::in);

    if (plik.good()==false) //sprawdzanie czy plik istnieje
    {
        cout << "File does not exist!" << endl; //je�li plik nie istnieje pokazuje sie taki komunikat
        exit(0);                                //i program sie zamyka
    }

    string linia;
    int numer_linii = 1;
    while(getline(plik,linia))          //tak d�ugo jak w pliku s� wype�nione jakie� linie pobieramy je
    {
        switch (numer_linii)
        {
            case 1: imie = linia;       break;  //w linii 1 pobierz linie 1 do zmiennej imie
            case 2: nazwisko = linia;   break;  //w linii 2 pobierz linie 1 do zmiennej nazwisko
            case 3: numer = linia;      break;  //w linii 3 pobierz linie 1 do zmiennej numer
        }
        numer_linii++;
    }


    cout << imie        << endl;
    cout << nazwisko    << endl;
    cout << numer       << endl;

    plik.close();

    return 0;
}
