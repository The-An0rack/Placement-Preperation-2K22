#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, n;
		int sum = 0, count = 0;
		cin >> n >> x;
		int arr[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, arr + n, cmp);
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
			count++;
			if (sum >= x)
			{
				cout << count << endl;
				break;
			}
		}
		if (sum < x) cout << "-1" << endl;

	}
	return 0;
}