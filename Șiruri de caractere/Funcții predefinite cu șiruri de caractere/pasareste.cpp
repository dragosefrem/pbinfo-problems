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

    for (int i = strlen(s)-1; i >= 0; i--)
    {
        if (esteVocala(s[i]))
        {
            for (int j = strlen(s)+1; j > i+2; j--)
                s[j] = s[j-2];
            s[i+1] = 'p';
            s[i+2] = s[i];

        }
    }

    cout << s;

    return 0;

}
