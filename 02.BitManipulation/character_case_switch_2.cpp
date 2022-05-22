#include <iostream>

using namespace std;

int main()
{
	char c = 'F';
	char c2 = 'y';


	//Upper to Lowercase
	char mask = ' ';
	char res = c | mask;

	//Lower to Uppercase
	mask = '_';
	char res2 = c2 & mask;

	cout << c << " : " << res << endl;
	cout << c2 << " : " << res2 << endl;

	return 0;
}
