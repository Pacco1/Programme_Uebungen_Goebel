#include <iostream>

using namespace std;

int main()
{
	double zahl1, zahl2, ergebnis;
	char rechenzeichen;

	cout << "Geben Sie eine Rechenaufgba eine: ";
	cin >> zahl1 >> rechenzeichen >> zahl2;

	switch (rechenzeichen)
	{
	case '+':
		ergebnis = zahl1 + zahl2;
		break;

	case '-':
		ergebnis = zahl1 - zahl2;
		break;

	case '*':
		ergebnis = zahl1 * zahl2;
		break;

	case '/':
		ergebnis = zahl1 / zahl2;
		break;

	default:
		cout << "unbekanntes Rechenzeichen!\n";
		cout << "Geben Sie eines der vier folgenden Rechenzeichen an!!!";

		return 1;
	}

	cout << zahl1 << "" << rechenzeichen << "" << zahl2 << "=" << ergebnis << "\n";

}
