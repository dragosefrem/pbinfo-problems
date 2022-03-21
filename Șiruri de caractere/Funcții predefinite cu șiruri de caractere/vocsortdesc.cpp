#include <iostream>
#include <cstring>

using namespace std;

void interschimbare(char s1[], char s2[])
{
    char aux[256];
    strcpy(aux,s1);
    strcpy(s1,s2);
    strcpy(s2,aux);
}

int nrVoc(char s[])
{
    int nr = 0;
    int dim = strlen(s);

    for (int i = 0; i < dim; i++)
    {
        if (strchr("aeiouAEIOU",s[i]))
            nr++;
    }
    return nr;
}

void sorteaza(char cuv[][256], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int nrVocaleJ = nrVoc(cuv[j]);
            int nrVocaleI = nrVoc(cuv[i]);
            if (nrVocaleJ > nrVocaleI)
                interschimbare(cuv[j],cuv[i]);
            else if (nrVocaleI == nrVocaleJ)
            {
                int dimJ = strlen(cuv[j]);
                int dimI = strlen(cuv[i]);
                if (dimJ > dimI)
                    interschimbare(cuv[j],cuv[i]);
                else if (dimJ == dimI)
                {
                    if (strcmp(cuv[j],cuv[i]) < 0)
                        interschimbare(cuv[j],cuv[i]);
                }
            }
        }
    }
}


char s[256], cuv[128][256], *p;
int n;

int main()
{
    cin.getline(s,256);
    p = strtok(s, " ");

    while (p != NULL)
    {
        strcpy(cuv[n],p);
        n++;
        p = strtok(NULL, " ");
    }

    sorteaza(cuv,n);

    for (int i = 0; i < n; i++)
    {
        cout << cuv[i] << '\n';
    }

    return 0;

}
