#include <bits/stdc++.h>

using namespace std;

#define int long long int
//ranges to 10^18
//default int has range 10^9

void solve()
{
	int n;
	vector<string> v;
	unordered_map<string,int> m;

	for(int i = 0; i < n; i++) {
		string str;
		getline(cin, str);
		m[str]++;
		v.push_back(str);
	}
	for(string s : v) {
		if(m[s] > 1) {
			cout << s << endl;
		} else {
			int i = s.find(" ");
			cout << s.substr(0,i) << endl;
		}
	}
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