#include <iostream>

using namespace std;

class Fiat
{
  double Cena;
  double doplaty;
  double StawkaVat;
  double cena_brutto;

public:
    string model;
    double cena_klima;
    double cena_nawigacja;

    void wycena(double cena_wersji)
    {
      doplaty = cena_klima + cena_nawigacja;
      Cena = cena_wersji + doplaty;
      cena_brutto = Cena * (1+(StawkaVat/100));
      cout << "Doplaty : " << doplaty << " zl" << endl;
      cout << "Cena samochodu netto : " << Cena << " zl " << endl;
      cout << "Cena samochodu brutto : " << cena_brutto << " zl " << endl;

    }

    Fiat();

};


Fiat::Fiat()
{
    model = "podstawowy";
    StawkaVat = 23;
    cena_klima = 0;
    cena_nawigacja = 0;
}



int main()
{
    Fiat panda;
    panda.model = "Najnowszy";
    panda.wycena(20000);


    return 0;
}
