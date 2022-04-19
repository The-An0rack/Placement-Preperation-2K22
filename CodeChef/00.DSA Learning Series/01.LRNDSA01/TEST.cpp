#include<iostream>

using namespace std;

int main()
{
	int num;
	bool flag = true;

	while (cin >> num ) {
		if (num != 42 && flag) {
			cout << num << endl;
		}
		else {
			flag = false;
		}
	}
	return 0;
}