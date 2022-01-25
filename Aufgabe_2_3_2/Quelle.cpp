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
        cout << "Dieser Monat heißt: Januar";
        break;

    case 2:
        cout << "Dieser Monat heißt: Februar";
        break;

    case 3:
        cout << "Dieser Monat heißt: Maerz";
        break;

    case 4:
        cout << "Dieser Monat heißt: April";
        break;

    case 5:
        cout << "Dieser Monat heißt: Mai";
        break;

    case 6:
        cout << "Dieser Monat heißt: Juni";
        break;

    case 7:
        cout << "Dieser Monat heißt: Juli";
        break;

    case 8:
        cout << "Dieser Monat heißt: August";
        break;

    case 9:
        cout << "Dieser Monat heißt: September";
        break;

    case 10:
        cout << "Dieser Monat heißt: Oktober";
        break;

    case 11:
        cout << "Dieser Monat heißt: November";
        break;

    case 12:
        cout << "Dieser Monat heißt: Dezember";
        break;

    default:
        cout << "Ungültige Eingabe!\n";
        cout << "Geben Sie Zahl zwischen 1 und 12 ein!";
    }
    return 0;
}