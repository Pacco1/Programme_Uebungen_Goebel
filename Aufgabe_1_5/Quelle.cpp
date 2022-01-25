#include <iostream>

using namespace std;

int main() 
{
	float r1, r2, gw;
	
	cout << "Parallele Widerstände\n";

	cout << "Bitte geben Sie den ersten Widerstandswert ein: ";
	cin >> r1;

	cout << "Bitte geben Sie den zweiten Widerstandwert ein: ";
	cin >> r2;

	gw = (r1 * r2) / (r1 + r2);

	cout << "Der Gesamtwiderstand beträgt " << gw << " Ohm!";
}