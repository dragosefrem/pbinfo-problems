#include <iostream>
#include <cstring>

using namespace std;

int distincte(char cuv[])
{
    int frecv[128] = {0};
    for (int i = 0; i < strlen(cuv); i++)
    {
        if (frecv[cuv[i]]==1)
            return 0;
        else
            frecv[cuv[i]]++;
    }

    return 1;
}

char s[256],s1[256],*p;

int main()
{
    cin.getline(s,256);
    p = strtok(s," ");
    int maxim = -1;
    while (p!=NULL)
    {
        int n = strlen(p);
        if (distincte(p) && n > maxim)
        {
            strcpy(s1,p);
            maxim = n;
        }
        p = strtok(NULL," ");
    }

    if (maxim == -1)
        cout << -1;
    else
        cout << s1;

    return 0;
}
