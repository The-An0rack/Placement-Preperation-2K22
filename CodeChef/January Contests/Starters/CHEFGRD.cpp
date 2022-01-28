#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, xs, ys;
		cin >> n >> xs >> ys;
		int x , y = x = (n + 1) / 2;
		int x_steps = abs(x - xs);
		int y_steps = abs(y - ys);
		int coins = (x_steps - min(x_steps, y_steps)) + (y_steps - min(x_steps, y_steps));
		cout << coins % 2 << endl;
	}

	return 0;
}