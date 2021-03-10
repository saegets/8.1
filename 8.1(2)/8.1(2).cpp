#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change(char* str)
{
    char* tmp = new char[strlen(str) * 2 / 1 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] == ',')
        {
                strcat(t, "**");
            t += 2;
            i += 1;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }
    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    strcpy(str, tmp);
    return tmp;
}
    int main()
    {
        char str[101];
        cout << "Enter string:" << endl;
        cin.getline(str, 100);
        char* dest = new char[151];
        dest = Change(str);
        cout << "Modified string (result): " << dest << endl;

        return 0;
    }