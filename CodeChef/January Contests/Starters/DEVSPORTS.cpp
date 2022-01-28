#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int z, y, a, b, c;
		cin >> z >> y >> a >> b >> c;
		int rem = z - y;
		int tot = a + b + c;
		if (rem >= tot) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}