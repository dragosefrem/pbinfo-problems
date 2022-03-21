#include <iostream>
#include <cstring>

using namespace std;

char s[256],sub[256];

int main()
{
    cin.getline(s,256);

    int n = (strlen(s))/2;
    int OK = 1;

    for (int i = 0; i < strlen(s); i++)
    {
        char aux[129] = {};
        if (s[i+n]!='\0')
            strncpy(aux,s+i,n);
        else
        {
            if (!OK)
                break;
            i = -1;
            n--;
            continue;
        }

        char *p = strstr(s,aux);
        int nr = 0;

        while(p != NULL)
        {
            nr++;
            p = strstr(p+1, aux);
        }

        if (nr == 2)
        {
            if (OK)
            {
                strcpy(sub,aux);
                OK = 0;
            }
            else
            {
                if (strcmp(aux,sub)<0)
                    strcpy(sub,aux);
            }
        }
    }

    cout << sub;

    return 0;

}
