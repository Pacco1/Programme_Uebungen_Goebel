#include <iostream>

using namespace std;

int main()
{
    int monat;

    cout << "Geben sie eine Zahl von 1 bis 12 ein, um den dementsprechend Monatsnamen zu erfahren:";
    cin >> monat;

    switch (monat)
    {
    case 1:
        cout << "Dieser Monat hei�t: Januar";
        break;

    case 2:
        cout << "Dieser Monat hei�t: Februar";
        break;

    case 3:
        cout << "Dieser Monat hei�t: Maerz";
        break;

    case 4:
        cout << "Dieser Monat hei�t: April";
        break;

    case 5:
        cout << "Dieser Monat hei�t: Mai";
        break;

    case 6:
        cout << "Dieser Monat hei�t: Juni";
        break;

    case 7:
        cout << "Dieser Monat hei�t: Juli";
        break;

    case 8:
        cout << "Dieser Monat hei�t: August";
        break;

    case 9:
        cout << "Dieser Monat hei�t: September";
        break;

    case 10:
        cout << "Dieser Monat hei�t: Oktober";
        break;

    case 11:
        cout << "Dieser Monat hei�t: November";
        break;

    case 12:
        cout << "Dieser Monat hei�t: Dezember";
        break;

    default:
        cout << "Ung�ltige Eingabe!\n";
        cout << "Geben Sie Zahl zwischen 1 und 12 ein!";
    }
    return 0;
}