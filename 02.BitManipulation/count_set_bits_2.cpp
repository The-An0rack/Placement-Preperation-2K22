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
	int count = 0;
	print_binary(n);
	while(n > 0)
	{
		if((n & 1) != 0)
		{
			count++;
		}
		n = n >> 1;
	}
	cout << "Set Bits: " << count ;
	return 0;
}
