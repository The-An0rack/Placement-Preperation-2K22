#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		unsigned long long int arr[n];
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		unsigned long long int curr = arr[0];
		int inx = 1;
		for(int i = 1; i < n; i++)
		{
			if(((arr[i] + inx) - curr) == 1)
			{
				curr = arr[i] + inx;
				inx++;
			} 
		}
		cout << max(curr,arr[n-1]) << endl;
	}
}