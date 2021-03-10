#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str)
{
    if (strlen(str) < 3)
        return 0;
    int k = 0;
    int nomer = 0;
        for (int i = 0; str[i] != 0; i++)
            if (str[i] == ',' && k < 3)
            {
                k++;
                nomer = i + 1;
            }
        if (k == 3)
            return nomer;
        else return 0;



}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    if (Count(str) > 0)
        cout << "third " << "," << " number: " << Count(str) << endl;
    else
        cout << "there are less than 3 elements, or no ',' symbols" << endl;
    return 0;
}

