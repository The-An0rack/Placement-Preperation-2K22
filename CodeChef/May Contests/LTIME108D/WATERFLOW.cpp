#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int w,x,y,z;

		cin >> w >> x >> y >> z;

		if(x == (w + (y*z)))
		{
			cout << "filled";
		}
		else if(x < (w + (y*z)))
		{
			cout << "overflow";
		}
		else
		{
			cout << "unfilled";
		}
		cout << endl;
	}
	return 0;
}