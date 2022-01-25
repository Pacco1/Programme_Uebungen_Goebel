#include <iostream>
using namespace std;

int main()
{
	int h, leerzeichen;

	cout << "Hoehe: ";
	cin >> h;
	cout << "\n\n\n\n\n";

	leerzeichen = h - 1;

	for (int i = 0, s = 1; i < h; i++)
	{
		for (int x = 0; x < leerzeichen; x++)
			cout << " ";

		for (int l = 0; l < s; l++)
			cout << "X";

		s += 2;
		leerzeichen--;

		cout << "\n";
	}
}