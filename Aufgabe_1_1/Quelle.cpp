#include <iostream>

using namespace std;

int main()
{
	float zahl1, zahl2, differenz;

		cout << "SUBTRAKTION\n";

		cout << "Geben Sie die erste Zahl ein: ";
		cin >> zahl1;

		cout << "Geben Sie die zweite Zahl an: ";
		cin >> zahl2;

		differenz = zahl1 - zahl2;

	cout << "Die Differenz der beiden eingegebenen Zahlen lautet " << differenz << " !";
}