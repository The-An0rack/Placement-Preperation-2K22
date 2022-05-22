#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, p, x, y;
		cin >> n >> p >> x >> y;
		int arr[n];
		for (int i = 0; i < n ; i++)
		{
			cin >> arr[i];
		}
		int c_ealder = 0;
		for (int i = 0; i < p; i++)
		{
			c_ealder += arr[i];
		}
		int total = (y * c_ealder) + ((p - c_ealder) * x);
		cout << total << endl;
	}
	return 0;
}