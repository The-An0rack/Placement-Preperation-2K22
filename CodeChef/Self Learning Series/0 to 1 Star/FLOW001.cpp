#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		unsigned long long int sum;
		cin >> a >> b;
		sum = (unsigned long long int)a + b;
		cout << sum << endl;
	}
}