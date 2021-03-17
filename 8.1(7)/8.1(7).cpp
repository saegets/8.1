#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	size_t pos = 0;
	int k = 0;
	int nomer = 0;
	while ((pos = s.find(',', pos)) != -1 && k !=3)
	{
		k++;
		pos++;
		nomer = pos;
	}
	return nomer;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	if (Count(str) > 3)
		cout << "Nomer of 3 ',' element " << Count(str) << endl;
	else
		cout << "There are no ',' elements or less than 3 ',' elements";

		return 0;
}
