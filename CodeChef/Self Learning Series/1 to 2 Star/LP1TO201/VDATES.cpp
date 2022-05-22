#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long int d,l,r;
		cin >> d >> l >> r;
		if(l <= d && d <= r) cout << "Take second dose now";
		else if(r < d) cout << "Too Late";
		else cout << "Too Early";
		cout << endl;
	}
	return 0;
}