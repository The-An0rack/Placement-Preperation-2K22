#include<bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	cin >> num;
	std::vector<int> v;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0) v.push_back(i);
	}
	cout << v.size() << endl;
	for (auto i : v) {
		cout << i << " ";
	}
	return 0;
}