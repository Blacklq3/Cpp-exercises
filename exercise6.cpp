#include <iostream>

using namespace std;

int main()
{
   double Tabela[5][5] = {
   {1,3.58,5,10,2},
   {2,9.61,5,25,2},
   {3,8.52,8,18,3},
   {4,10.25,8,36,6},
   {5,6.17,23,4,1}

   };
   int licznik;
   double CenaBrutto, wartosc = 0;

   for(licznik=0;licznik <= 4; licznik++)
   {
       CenaBrutto = Tabela[licznik][1] + ((Tabela[licznik][2] / 100) * Tabela[licznik][1]);

       wartosc = wartosc + (CenaBrutto * Tabela[licznik][3] * Tabela[licznik][4]);

       cout << "Towar ID: " << Tabela[licznik][0] << " cena brutto : " << CenaBrutto << " PLN" << endl;

   }

    cout << "\n Wartosc magazynu : " << wartosc << " zl " << endl;


    return 0;
}