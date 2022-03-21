#include <iostream>
#include <cstring>

using namespace std;

int esteVocala(char c)
{
    if (strchr("aeiou",c))
        return 1;
    return 0;
}

char s[256];

int main()
{
    cin.getline(s,256);

    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i] == 'p' && s[i-1] == s[i+1] && esteVocala(s[i-1]))
        {
            for (int j = i; j < strlen(s); j++)
                s[j] = s[j+2];
        }
    }

    cout << s;

    return 0;

}
