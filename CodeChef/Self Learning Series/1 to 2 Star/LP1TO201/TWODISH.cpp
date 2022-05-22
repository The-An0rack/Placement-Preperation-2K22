#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,a,b,c;
		cin >> n >> a >> b >> c;
		int dish1 = min(a,b);
		int dish2 = min(c,b);
		if(dish1 > dish2)
		{
			b = b - dish1;
			if( b < 0) b = 0;
			dish2 = min(c,b);
			if(dish1 + dish2 >= n) cout << "YES";
			else cout << "NO";
		}
		else
		{
			b = b - dish2;
			if( b < 0) b = 0;
			dish1 = min(a,b);
			if(dish1 + dish2 >= n) cout << "YES";
			else cout << "NO";
		}
		cout << endl;
	}
}