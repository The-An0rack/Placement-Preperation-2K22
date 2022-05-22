#include <bits/stdc++.h>

using namespace std;

bool sortbysecdesc(const pair<unsigned long long int, unsigned long long int> &a,
                   const pair<unsigned long long int, unsigned long long int> &b)
{
       return a.second>b.second;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		unsigned long long int x,s,r;
		cin >> n >> x;
		vector<pair<unsigned long long int, unsigned long long int>> m;

		for(int i = 0; i < n; i++)
		{
			cin >> s >> r;
			m.push_back(make_pair(s,r));
		}

		sort(m.begin(),m.end(),sortbysecdesc);
		
		for(auto i : m)
		{
			if(i.first <= x)
			{
				cout << i.second << endl;
				break;
			}
		}
	}
	return 0;
}