#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int num, max_val = -1;
	    for(int i = 1; i <=4; i++)
	    {
	        cin >> num;
	        if(num > max_val)
	        {
	            max_val = num;
	        }
	    }
	    cout << max_val << endl;
	}
	return 0;
}
