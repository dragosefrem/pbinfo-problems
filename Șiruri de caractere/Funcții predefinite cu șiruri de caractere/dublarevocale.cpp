#include <iostream>
#include <cstring>

using namespace std;

int esteVocala(char c)
{
    if (strchr("aeiou",c))
        return 1;
    return 0;
}

char s[101];

int main()
{
    cin.getline(s,101);

    for (int i = strlen(s)-1; i >= 0; i--)
    {
        if (esteVocala(s[i]))
        {
            for (int j = strlen(s); j > i+1; j--)
                s[j] = s[j-1];
            s[i+1] = s[i];

        }
    }

    cout << s;

    return 0;

}
