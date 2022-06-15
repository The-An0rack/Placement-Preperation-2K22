#include <bits/stdc++.h>

using namespace std;

#define int long long int
//ranges to 10^18
//default int has range 10^9

void solve()
{
	int n;
	string a,b;
	set<string> s;
	int count = 0;

	cin >> n >> a >> b;
	for(int i = 0; i < n ; i++ ) {
		if(a.substr(i,1) != b.substr(i,1)) {
			if(s.find(b.substr(i,1)) == s.end()) {
				s.insert(b.substr(i,1));
				count++;
			}
		}
	}
	cout << count << endl;
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