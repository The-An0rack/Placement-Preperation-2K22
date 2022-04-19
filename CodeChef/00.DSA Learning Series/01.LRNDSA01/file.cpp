#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	int count_char = 0;
	int count_spaces = 0;
	int count_full_stops = 0;
	cout << "Enter a string: ";
	getline(cin, str);
	int i = 0;
	while (str[i] != '\0')
	{

		count_char++;
		if (str[i] == ' ') count_spaces++;
		else if (str[i] == '.') count_full_stops++;
		i++;
	}

	cout << "Number of Characters: " << count_char << endl;
	cout << "Number of Spaces: " << count_spaces << endl;
	cout << "Number of Lines: " << count_full_stops;
	return 0;
}