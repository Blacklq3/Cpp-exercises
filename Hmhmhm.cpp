#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace this_thread;
using namespace chrono;


void FunText()
{
    int Looping;
    for (Looping = 1; Looping <= 40; Looping++) {
        cout.width(Looping*2/1.2);
        cout.fill('*');
        cout << "hmhmhm" << endl;
    }
}

int main()
{
    int multiplication;
    int Looping;

    cout << "Jaki jest wynik mnozenia 2 razy 2?\n";
    cin >> multiplication;
    if (multiplication == 4) {
        cout << "Niezle, to jest poprawna odpowiedz\n";
        sleep_for(milliseconds(1000));
        cout << "Wcisnij enter, aby zamknac program albo nacisnij E aby kontynuowac...";
        cin.get();
    }
    else if (multiplication != 4) {
        cout << "Jestes slaby w matmie\n";
        sleep_for(milliseconds(1000));
        cout << "Wcisnij enter, aby zamknac program albo nacisnij E aby kontynuowac...";
        FunText();
        cin.get();
    }
}  