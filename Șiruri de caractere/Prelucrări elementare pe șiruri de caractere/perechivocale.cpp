#include <iostream>
#include <cstring>

using namespace std;

int esteVocala(char c)
{
    if (strchr("aeiou",c)!=NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char s[256];
    cin.getline(s,256);
    int nr = 0;
    for (int i = 1; i < strlen(s); i++)
    {
        if (esteVocala(s[i-1]) && esteVocala(s[i]))
            nr++;
    }

    cout << nr;

    return 0;
}
