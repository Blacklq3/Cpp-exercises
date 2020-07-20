#include <iostream>

using namespace std;

int main()
{

    int Wartosc = 10;
    int dododania;


    do
    {
        cin.clear();
        cin.sync();
    cout << "Poda liczbe calkowita" << endl;
    cin >> dododania;
    }while(cin.good() < 1);

    cout << "Wynik : " << Wartosc + dododania << endl;

    return 0;
}