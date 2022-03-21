#include <iostream>
#include <cstring>

using namespace std;

void acronim(char s[], char acr[])
{
    char *p = strtok(s, " ");
    int nr = 0;
    while(p!=NULL)
    {
        if (*p >= 'A' && *p <= 'Z')
        {
            acr[nr] = *p;
            nr++;
        }
        p = strtok(NULL, " ");
    }
    acr[nr] = '\0';
}

int main()
{
    char s[101],acr[10];
    cin.getline(s,101);
    acronim(s,acr);
    cout << acr;

    return 0;
}
