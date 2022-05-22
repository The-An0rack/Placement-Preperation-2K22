//This method uses inbuilt function:
// 							__buildin_popcount()

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
	print_binary(n);
	cout << "Set Bits: " << __builtin_popcount(n) ;
	return 0;
}
