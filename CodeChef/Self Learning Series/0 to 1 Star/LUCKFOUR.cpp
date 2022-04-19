#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		unsigned long long int num;
		cin >> num;
		int count = 0;
		while (num)
		{
			if (num % 10 == 4) count++;
			num /= 10;
		}
		cout << count << endl;
	}
	return 0;
}