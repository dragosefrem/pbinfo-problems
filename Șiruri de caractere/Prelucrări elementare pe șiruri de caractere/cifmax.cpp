#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[51];
    cin.getline(s,51);
    int frecv[65] = {0}, OK = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            frecv[s[i]]++;
            OK = 1;
        }
    }

    if (OK == 1)
    {
        int maxim = frecv['0'], n = 0;
        for (int i = '1'; i <= '9'; i++)
        {
            if (frecv[i] > maxim)
            {
                maxim = frecv[i];
                n = i - '0';
            }
            else if (frecv[i] == maxim)
            {
                if (i - '0' < n)
                    n = i - '0';
            }
        }
       cout << n;
    }
    else cout << "NU";

    return 0;
}
