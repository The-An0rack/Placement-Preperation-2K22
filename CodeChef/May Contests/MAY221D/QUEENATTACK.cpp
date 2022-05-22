#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,x,y;
		cin >> n >> x >> y;
		int moves = 2*(n-1); //stright
		moves += min(x-1,y-1); //top-left
		moves += min(y-1,n-x); // bottom-left
		moves += min(x-1,n-y); //top-right
		moves += min(n-x,n-y); // botom-right
		cout << moves << endl;
	}
	return 0;
}