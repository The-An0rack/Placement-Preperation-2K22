#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		unordered_map<unsigned long long int, int> m;
		float sum = 0;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			m[a[i]]++;
			sum += a[i];
		}
		sum = 2.0 * (sum / n);
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			count += m[sum - a[i]];
			if (sum - a[i] == a[i])
				count--;
		}
		cout << count / 2 << endl;


	}
}