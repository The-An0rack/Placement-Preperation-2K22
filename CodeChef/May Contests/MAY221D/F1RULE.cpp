#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x , y;
		cin >> x >> y;
		float q_time = x*1.07;
		if(y <= q_time)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}