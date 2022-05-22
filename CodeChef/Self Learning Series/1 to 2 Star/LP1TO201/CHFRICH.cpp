#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,x;
		cin >> a >> b >> x;

		float diff = floor((b-a)/x);
		cout << diff << endl;
	}
	return 0;
}