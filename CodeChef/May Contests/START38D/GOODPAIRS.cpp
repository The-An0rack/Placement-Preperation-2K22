#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int count = 0;
		cin >> n;
		unsigned long long int a[n],b[n];
		map<int,vector<int>> dp;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			dp[a[i]].push_back(i);
		}
		for(int i = 0; i < n; i++)
		{
			cin >> b[i];
			int temp = upper_bound(dp[b[i]].begin(),dp[b[i]].end(),i) - dp[b[i]].begin();
			count += dp[b[i]].size() - temp;
		}
		cout << count << endl;
	}
	return 0;
}