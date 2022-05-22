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
	int n = 31;
	int count = 0;
	print_binary(n);
	for(int i = 0; i < 32; i++)
	{
		int mask = 1 << i;
		if((n & mask) != 0)
		{
			count++;
		}
	}
	cout << "Set Bits: " << count ;
	return 0;
}
