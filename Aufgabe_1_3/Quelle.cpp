#include <iostream>
using namespace std;

int main()
{
	float liter, kilometer, durchschnitt;

	cout << "Geben Sie die gefahrenen Kilometer ein: ";
	cin >> kilometer;

	cout << "Geben Sie den verbrauchten Kraftstoff in Litern an: ";
	cin >> liter;
	
	durchschnitt = liter / (kilometer/100);

	cout << "Der Durchschnittsverbrauch liegt bei :" << durchschnitt << " l/100KM";

	return;

}