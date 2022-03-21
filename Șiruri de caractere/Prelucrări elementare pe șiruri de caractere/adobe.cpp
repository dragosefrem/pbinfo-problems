#include <iostream>
#include <cstring>

using namespace std;

int esteVocalaAdobe(char c)
{
    if (strchr("aeo-",c)!=NULL)
        return 1;
    else
        return 0;
}

int esteConsoanaAdobe(char c)
{
    if (strchr("db+",c)!=NULL)
        return 1;
    else
        return 0;
}

int litereRepetitiveAdobe(char s[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
              if (s[i] == s[j] && (strchr("aeo",s[i]) || strchr("db",s[i])))
                    return 1;
        }
    }

    return 0;
}

int anagramaAdobe(char s[])
{
        if (litereRepetitiveAdobe(s))
            return 0;
        int nrVocale = 0, nrConsoane = 0, nrStar = 0;
        for (int i = 0; i <= 4; i++)
        {
            if (esteVocalaAdobe(s[i]))
                nrVocale++;
            if (esteConsoanaAdobe(s[i]))
                nrConsoane++;
            if (s[i] == '*')
                nrStar++;
        }
        while (nrVocale != 3 && nrStar > 0)
        {
            nrVocale++;
            nrStar--;
        }
        while (nrConsoane != 2 && nrStar > 0)
        {
            nrConsoane++;
            nrStar--;
        }
        if (nrVocale == 3 && nrConsoane == 2)
            return 1;
        else
            return 0;
}

int main()
{
    char s[6],c;
    int nr = 0, k = 0, OK = 1;
    c = cin.get();
    while(c!= '\n')
    {
        if (c >= 'A' && c <= 'Z')
            c = c + 32;
        if (OK == 1)
        {
            s[k] = c;
            k++;
            if (k == 5)
            {
                s[k] = '\0';
                OK = 0;
            }
        }
        else
        {
            for (int i = 0; i < 5; i++)
                s[i] = s[i+1];
            s[4] = c;
            s[5] = '\0';

        }
        if (strlen(s) == 5 && anagramaAdobe(s))
            nr++;
        c = cin.get();
    }

    cout << nr;

    return 0;
}
