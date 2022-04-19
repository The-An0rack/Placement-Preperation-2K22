#include <iostream>

using namespace std;

int sum_of_digit(int num)
{
	int sum = 0;
	while (num)
	{
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		unsigned long long int num;
		cin >> num;
		cout << sum_of_digit(num) << endl;
	}
	return 0;
}