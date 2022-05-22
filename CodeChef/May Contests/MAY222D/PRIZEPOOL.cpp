#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y,sum;
		cin >> x >> y;
		sum = x*10 + y*90;
		cout << sum << endl;
	}
	return 0;
}