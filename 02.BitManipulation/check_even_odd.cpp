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
	int n = 11;
	if((n & 1) == 0)
	{
		cout << "Even";
	}
	else 
	{
		cout << "Odd";
	}
	return 0;
}
