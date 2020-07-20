#include <iostream>
#include <string>

using namespace std;

int main()
{
  string Produkty[4] = {"Banany","Chleb","Jablka","Marchewki"};
  double Ceny[4] = {2.2,1.5,3.1,2.99};

  int Produkt;
  string wybranyprodukt;
  double cenawybranyprodukt;

  cout << "Wybierz Numer produktu: ";
  cin >> Produkt;

  wybranyprodukt = Produkty[Produkt];
  cenawybranyprodukt = Ceny[Produkt];

  cout << "Twoj Produkt to " << wybranyprodukt << " jego cena wynosi: " << cenawybranyprodukt << endl;



    return 0;
}
