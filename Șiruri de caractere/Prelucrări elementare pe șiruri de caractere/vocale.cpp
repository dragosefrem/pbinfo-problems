#include <iostream>
#include <cstring>

using namespace std;

int vocala(char s[], int i)
{
    if (strchr("aeiou",s[i])!=NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char s[21];
    cin.getline(s,21);
    for (int i = 0; i < strlen(s); i++)
    {
        if (vocala(s,i))
            s[i] = s[i] - 32;
    }
    cout << s;
    return 0;
}
