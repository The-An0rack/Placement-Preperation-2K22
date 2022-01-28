#include<iostream>

using namespace std;

int main() {
	int n;

	cin >> n;
	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= 5; col++) {
			if (row % 2 != 0) {
				cout << (row - 1) * 5 + col << " ";
			} else {
				cout << (row * 5) - (col - 1) << " ";
			}

		}
		cout << endl;
	}
	return 0;
}