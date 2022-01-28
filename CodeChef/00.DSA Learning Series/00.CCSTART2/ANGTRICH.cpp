#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (((a + b + c) == 180) && (a != 0 && b != 0 && c != 0) && (a != 180 && b != 180 && c != 180)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}