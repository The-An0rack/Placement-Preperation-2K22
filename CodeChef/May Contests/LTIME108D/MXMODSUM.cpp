#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long int m, a[n];
		cin >> m;
		for(int i = 0; i < n ; i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);

		long int max_val = a[n-1] + a[n-1];
		cout << max_val << endl;

		for(int i = n-2; i >= 0; i--)
		{
			long int val  = a[n-i] + a[n-1];
			
			max_val = val1;
		}
		cout << max_val << endl;
	}
	return 0;
}