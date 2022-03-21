#include <iostream>
#include <cstring>

using namespace std;

void eliminareLitera(char s[], int k)
{
    for (int i = k; i < strlen(s); i++)
        s[i] = s[i+1];
}

int esteVocala(char c)
{
    if (strchr("aeiou",c)!=NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char s[21];
    cin >> s;

    for (int i = 0; i < strlen(s); i++)
    {
        if (esteVocala(s[i]))
        {
            eliminareLitera(s,i);
            i--;
        }
    }

    cout << s;

    return 0;
}
