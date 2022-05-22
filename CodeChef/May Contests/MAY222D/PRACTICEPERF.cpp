#include <iostream>

using namespace std;

int main()
{
	int num,count = 0;
	for(int i = 1; i<= 4; i++)
	{
		cin >> num;
		if(num >= 10)
		{
			count++;
		}
	}
	cout << count;
}