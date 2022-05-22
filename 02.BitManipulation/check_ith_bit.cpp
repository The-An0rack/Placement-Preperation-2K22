#include <iostream>

using namespace std;

void print_binary(int n)
{
	cout << n << " --> ";
	for(int i = 9; i>=0;i--)
	{
		(n & (1 << i))? cout << "1" :cout << "0";
	}
	cout << endl;
}

int main()
{
	int n = 5;
	int i;
	print_binary(n);
	//cout << "Enter the place of bit to be checked: ";
	cin >> i;

	if (n & 1 << i)
	{
		cout << "Bit is set";
	}
	else
	{
		cout << "Bit is unset";
	}
	return 0;
}