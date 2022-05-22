#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long int a,b,m,path1, path2;
		cin >> a >> b >> m;
		path1 = (a>b)? (a-b):(b-a);
		path2 = min(a,b) + (m - max(a,b));
		cout << min(path1,path2) << endl;
	}
	return 0;
}