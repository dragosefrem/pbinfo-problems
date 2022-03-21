#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101];
    cin >> s;

    int nr = 0, OK = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='i')
            nr++;
        else if (strchr("aeou",s[i])!=NULL)
            OK = 0;
    }

    if (nr == strlen(s) || OK == 0)
        cout << "NU";
    else
        cout << "DA";

    return 0;
}
