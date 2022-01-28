#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num % 5 == 0 || num % 6 == 0) cout << "YES";
	else cout << "NO";
	return 0;
}