#include<iostream>

using namespace std;

int main()
{
	int t, num;
	cin >> t;
	while (t--)
	{
		int temp = 0;
		cin >> num;
		while (num > 0)
		{
			temp = (temp * 10) + num % 10;
			num /= 10;
		}
		cout << temp << endl;
	}
	return 0;
}