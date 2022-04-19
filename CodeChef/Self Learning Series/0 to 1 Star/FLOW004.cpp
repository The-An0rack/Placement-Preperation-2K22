#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		unsigned long long int num;
		int sum = 0;
		cin >> num;
		sum = num % 10;
		while (num >= 10)
		{
			num /= 10;
		}
		sum += num % 10;
		cout << sum << endl;
	}

	return 0;
}