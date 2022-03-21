#include <iostream>
#include <cstring>

using namespace std;

int esteNumar(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (!strchr("0123456789",s[i]))
            return 0;
    }
    return 1;
}

char s[101], nr[101], *p;
int maxCif = -1;

int main()
{
    cin.getline(s,101);
    p = strtok(s, " ");
    while (p != NULL)
    {
        if (esteNumar(p))
        {
            if (*p - '0' > maxCif)
            {
                strcpy(nr,p);
                maxCif = *p - '0';
            }
        }
        p = strtok(NULL, " ");
    }

    if (maxCif > -1)
        cout << nr;
    else
        cout << "nu exista";

    return 0;

}
