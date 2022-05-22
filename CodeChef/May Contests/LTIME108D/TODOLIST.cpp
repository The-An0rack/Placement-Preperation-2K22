#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int count = 0, temp,n;
		cin >> n;
		while(n--)
		{
			cin >> temp;
			if(temp >= 1000) 
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}