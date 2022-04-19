#include<iostream>

using namespace std;

int main()
{
	int a;
	float b;
	cin >> a >> b;
	if (a % 5 != 0 || a + 0.5 > b) cout << b;
	else cout << ( b - 0.5 - a) ;
	return 0;
}