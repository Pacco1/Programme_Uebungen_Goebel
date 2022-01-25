#include <iostream>
using namespace std;

int main()
{
	int zahl = 0, i = 0;
	cout << "Geben Sie eine Zahl ein: ";
	cin >> zahl;

	for (i = 0; i <= zahl; i++)
	{
		for (i = 0; i <= zahl; i--)
		{
			cout << i << "\n";
		}
	}

	return 0;
}
