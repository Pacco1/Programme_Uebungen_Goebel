#include <iostream>

using namespace std;

int main() 
{
	float zahl1, zahl2, ergebnis;
	
	cout << "DIVISION\n";

	cout << "Geben Sie die erste Zahl ein: ";
	cin >> zahl1;

	cout << "Geben Sie die zweite Zahl ein: ";
	cin >> zahl2;

	ergebnis = zahl1 / zahl2;

	cout << "Das Ergebnis der Division lautet: " << ergebnis << " !";
}