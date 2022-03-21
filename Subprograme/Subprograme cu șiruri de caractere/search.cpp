#include <cstring>

int IndexOf(char s[], char ch)
{
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ch)
            return i;
    return -1;
}

int LastIndexOf(char s[], char ch)
{
    for (int i = strlen(s)-1; i >=0; i--)
        if (s[i] == ch)
            return i;
    return -1;
}

int NthIndex(char s[], char ch, int k)
{
    int nr = 0;
    if (k > 0)
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == ch)
                nr++;
            if (nr == k)
                return i;
        }
    return -1;
}