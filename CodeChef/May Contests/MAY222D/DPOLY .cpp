#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n, num, deg = 0;
	    cin >> n;
	    for(int i = 0;i<n;i++)
	    {
	        cin >> num;
	        if(num != 0)
	        {
	            deg = i;
	        }
	    }
	    cout << deg << endl;
	}
	return 0;
}
