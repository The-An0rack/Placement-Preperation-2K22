#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y;
		cin >> x >> y;
		if(x==y && x != 0 && y != 0)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}