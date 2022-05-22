#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		unsigned long long int a, b;
		cin >> a >> b;
		if (a * 10 > b * 5) cout << "FIRST";
		else if (a * 10 < b * 5) cout << "SECOND";
		else cout << "ANY";
		cout << endl;
	}
	return 0;
}