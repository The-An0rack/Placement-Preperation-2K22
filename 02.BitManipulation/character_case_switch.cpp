#include <iostream>

using namespace std;

int main()
{
	char c = 'E';
	char c2 = 'z';


	//Upper to Lowercase
	int mask = 1 << 5;
	char res = c | mask;

	//Lower to Uppercase
	mask = ~(1<<5);
	char res2 = c2 & mask;

	cout << c << " : " << res << endl;
	cout << c2 << " : " << res2 << endl;

	return 0;
}
