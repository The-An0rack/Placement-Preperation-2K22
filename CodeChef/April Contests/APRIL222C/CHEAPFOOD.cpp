#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int cost;
		cin >> cost;
		int discount = max(100.0, 0.1 * cost);
		cout << discount << endl;
	}
	return 0;
}