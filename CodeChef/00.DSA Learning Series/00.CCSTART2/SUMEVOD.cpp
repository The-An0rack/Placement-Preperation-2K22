#include <iostream>

using namespace std;

int main()
{
	int n;
	long long int sum_even = 0;
	long long int sum_odd = 0;
	cin >> n;
	for (int i = 1; i <= 2 * n; i++) {
		if (i % 2 == 0) {
			sum_even += i;
		} else {
			sum_odd += i;
		}
	}
	cout << sum_odd << " " << sum_even;
	return 0;
}