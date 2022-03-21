#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256];
    int frecv[150] = {0};
    cin.getline(s,256);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            frecv[s[i]]++;
    }

    int maxim = -1;
    char c;
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (frecv[i] > maxim)
        {
            maxim = frecv[i];
            c = i;
        }
        else if (frecv[i] == maxim)
        {
            if (i < c)
                c = i;
        }
    }

    cout << c;

    return 0;
}
