#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, i;
		cin >> n;
		int arr[n];
		for (i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		i = 1;
		while (i < n)
		{
			if (arr[i] < arr[i - 1])
			{
				break;
			}
			i++;
		}

		if (i == n)
		{
			cout << "YES\n";
			continue;
		}
		swap(arr[i], arr[i - 1]);
		i = 1;
		while (i < n)
		{
			if (arr[i] < arr[i - 1])
			{
				break;
			}
			i++;
		}
		if (i == n) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}