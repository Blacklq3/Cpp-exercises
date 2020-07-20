#include <iostream>

using namespace std;

int main()
{
    int Liczba;
    int DontTouch;

    while(cin >> Liczba)
    {
      if (cin.fail())
      {
        cout << "Musisz podac liczbe" << endl;
      }
      else if (cin.good())
      {
        for (DontTouch = 1; DontTouch <= Liczba; DontTouch++)
        {
          if (Liczba%DontTouch==0)
          {
            cout << DontTouch << endl;
          }
        }

      }
    }



    return 0;
}
