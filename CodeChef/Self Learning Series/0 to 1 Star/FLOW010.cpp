#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		if (str.compare("B") == 0 || str.compare("b") == 0) cout << "BattleShip";
		else if (str.compare("C") == 0 || str.compare("c") == 0) cout << "Cruiser";
		else if (str.compare("D") == 0 || str.compare("d") == 0) cout << "Destroyer";
		else cout << "Frigate";
		cout << endl;
	}
	return 0;
}