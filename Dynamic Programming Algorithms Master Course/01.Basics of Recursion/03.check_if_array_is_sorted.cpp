#include <bits/stdc++.h>

#define int long long int
//ranges to 10^18
//default int has range 10^9

using namespace std;

bool is_sorted(int arr[],int n)
{
	if(n == 0 || n == 1)
	{
		return true;
	}

	if(arr[0] <= arr[1] && is_sorted(arr+1,n-1)) {
		return true;
	}

	return false;
}

void solve()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << is_sorted(arr,n);
}

int32_t main()
{
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}