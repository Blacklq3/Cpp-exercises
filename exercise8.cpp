#include <iostream>

using namespace std;

void CoutIt(string opis,double cena,int Stawka)
{
  if (opis == "Butelka")
  {
   cout << "Butelka kosztuje " << cena << endl;
  }
  else if (opis == "Ser")
  {
   cout << "Ser kosztuje " << cena << endl;
  }
  else if (opis == "Chleb")
  {
   cout << "Chleb kosztuje " << cena << endl;
  }

}


int main()
{
    double CenaNetto[3] = {2.2,4.2,1.5};
    int StawkaVat[3] = {5,3,4};
    string Opis[3] = {"Butelka","Ser","Chleb"};

    for (int i=0;i <= 2;i++)
    {
      CoutIt(Opis[i],CenaNetto[i],StawkaVat[i]);
    }


    return 0;
}