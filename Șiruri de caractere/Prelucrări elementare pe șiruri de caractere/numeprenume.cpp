#include <iostream>
#include <cstring>

using namespace std;

void eliminare(char s[], int k)
{
    for (int i = k; i < strlen(s); i++)
        s[i] = s[i+1];
}

int main()
{

    char nume[21],prenume[21];
    cin >> nume >> prenume;

    for (int i = 0; i < strlen(prenume); i++)
    {
        if (strchr("aeiouAEIOU",prenume[i])!=NULL)
        {
            eliminare(prenume,i);
            i--;
        }
    }

    cout << prenume << " " << nume;

    return 0;
}
