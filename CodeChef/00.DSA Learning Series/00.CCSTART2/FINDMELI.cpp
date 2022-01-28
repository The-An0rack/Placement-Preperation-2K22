#include<iostream>

using namespace std;

int main()
{
	int n, k;
	bool flag = false;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == k) flag = true;
	}
	if (flag) cout << "1";
	else cout << "-1";
	return 0;
}