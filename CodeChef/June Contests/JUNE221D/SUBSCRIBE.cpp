#include <bits/stdc++.h>

using namespace std;

#define int long long int
//ranges to 10^18
//default int has range 10^9

void solve()
{
	int n , x;
	cin >> n >> x;
	int ppl = n/6;
	if(n%6 != 0) {
		ppl++;
	}
	cout << ppl * x << endl;
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