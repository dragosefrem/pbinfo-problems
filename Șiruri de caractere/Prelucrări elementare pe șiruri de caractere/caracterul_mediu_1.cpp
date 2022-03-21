#include <iostream>
#include <cstring>

using namespace std;

int caracterBun(char c)
{
    if (c == ' ')
        return 0;
    if (c >= 'A' && c <= 'Z')
        return 0;
    if (strchr("aeiou",c)!=NULL)
        return 0;
    return 1;
}

int main()
{
    char s[201];
    cin.getline(s,201);
    int nr = 0, n = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (caracterBun(s[i]))
        {
            nr+=s[i];
            n++;
        }
    }

    char c = nr/n;
    cout << c;

    return 0;
}
