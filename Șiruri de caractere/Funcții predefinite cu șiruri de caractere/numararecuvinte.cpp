#include <iostream>
#include <cstring>

using namespace std;

bool esteVocala(char c)
{
    if (strchr("aeiouAEIOU",c))
        return true;
    return false;
}

char s[151], *p;
int nr;

int main()
{
    cin.getline(s,151);
    p = strtok(s, " ");
    while (p != NULL)
    {
        if (esteVocala(p[0]) && esteVocala(p[strlen(p)-1]))
            nr++;
        p = strtok(NULL, " ");
    }

    cout << nr;

    return 0;

}
