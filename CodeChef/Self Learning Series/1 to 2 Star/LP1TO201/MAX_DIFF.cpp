#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,s;
		cin >> n >> s;
		int t1 = min(n,s);
		int t2 = s - t1;

		cout << abs(t1-t2) << endl;
	}
	return 0;
}