#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int d_dsa, d_toc, d_dm, d_total;
		int s_dsa, s_toc, s_dm, s_total;

		cin >> d_dsa >> d_toc >> d_dm;
		cin >> s_dsa >> s_toc >> s_dm;

		d_total = d_dsa + d_toc + d_dm;
		s_total = s_dsa + s_toc + s_dm;

		if (d_total > s_total)
		{
			cout << "DRAGON";
		}
		else if (d_total < s_total)
		{
			cout << "SLOTH";
		}
		else
		{
			if (d_dsa > s_dsa)
			{
				cout << "DRAGON";
			}
			else if (d_dsa < s_dsa)
			{
				cout << "SLOTH";
			}
			else
			{
				if (d_toc > s_toc)
				{
					cout << "DRAGON";
				}
				else if (d_toc < s_toc)
				{
					cout << "SLOTH";
				}
				else
				{
					cout << "TIE";
				}
			}
		}

		cout << endl;
	}
	return 0;
}