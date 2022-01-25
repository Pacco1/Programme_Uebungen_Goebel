#include <iostream>

using namespace std;

int main()
{
    float betrag, bestellwert, versandteuer = 5.5, versandbillig = 3;

    cout << "Geben Sie einen Bestellwert ein : ";
    cin >> bestellwert;

    if (bestellwert < 100)
    {
        betrag = bestellwert + versandteuer;
        cout << "Der Betrag lautet: " << betrag;
    }

    else if ((bestellwert > 100) && (bestellwert < 200))
    {
        betrag = bestellwert + versandbillig;
        cout << "Der Betrag lautet: " << betrag;
    }

    else
    {
        betrag = bestellwert;
        cout << "Der Betrag lautet: " << betrag;
    }

    return;
}