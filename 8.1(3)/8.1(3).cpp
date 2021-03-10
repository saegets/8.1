#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str, int i, int k)
{
        if (strlen(str) < 3)
            return 0;
        if (str[i] != 0)
        {
            if (str[i] == ',' && k < 3)
            {
                return Count(str, i + 1, k + 1);
            }
            else if (k < 3) return Count(str, i + 1, k);
        }
        if (k == 3)
            return i;
        else return 0;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    if (Count(str, 0, 0))
        cout << "Number of Third ',' element: " << Count(str, 0, 0) << endl;
    else
        cout << "There are less than 3 elements or no ',' elements";
}

