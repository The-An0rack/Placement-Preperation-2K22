#include <iostream>

using namespace std;

unsigned long long int reverse(int num)
{
	unsigned long long int result = 0;
	while (num)
	{
		result = result * 10 + num % 10;
		num /= 10;
	}
	return result;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int num;
		cin >> num;
		cout << reverse(num) << endl;
	}

	return 0;
}