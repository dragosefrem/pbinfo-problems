#include <iostream>
#include <cstring>

using namespace std;

int tip(char c1, char c2)
{
    if (strchr("aeiou",c1) && strchr("aeiou",c2))
        return 2;
    else if (!strchr("aeiou",c1) && !strchr("aeiou",c2))
        return 1;
    return 0;
}

int main()
{
    char s1[31],s2[31];
    cin >> s1 >> s2;

    for (int i = 0; i < strlen(s1); i++)
    {
        if (tip(s1[i],s2[i])==0)
            cout << '?';
        else if (tip(s1[i],s2[i])==1)
            cout << '#';
        else cout << '*';
    }

    return 0;
}
