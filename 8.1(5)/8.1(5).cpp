#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int Count(char* s)
{
	int k = 0, pos = 0;
	char* t;
	while (t = strchr(s + pos, ',')) 
	{
		pos = t - s + 1;
		k++;
	}
	if (k == 3)
		return pos;
}


int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	if (Count(str) != 0)
		cout << "Number of third ',' element " << Count(str) << endl;
	else
		cout << "There are no ',' elements";
	return 0;
}