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
	int n = 12;
	int i;
	cin >> i;
	print_binary(n);
	n = n | 1 << i;
	print_binary(n);
	return 0;
}