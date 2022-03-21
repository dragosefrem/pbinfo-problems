#include <iostream>
#include <cstring>

using namespace std;

struct cuvant
{
    char content[50];
    int aparitie = 0;
}cuv[5000];

int checkIfAlready(cuvant cuv[], char ch[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(cuv[i].content,ch)==0)
            return i;
    }
    return -1;
}

void sortCuvant(cuvant cuv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(cuv[j].content,cuv[i].content) < 0)
            {
                cuvant aux = cuv[i];
                cuv[i] = cuv[j];
                cuv[j] = aux;
            }
        }
    }
}

int main()
{
    char s[10001];
    cin.getline(s,10001);
    char *p = strtok(s,"!,. ");
    int n = 0;
    while (p!=NULL)
    {
        int i = checkIfAlready(cuv,p,n);
        if (i==-1)
        {
            strcpy(cuv[n].content,p);
            cuv[n].aparitie++;
            n++;
        }
        else
            cuv[i].aparitie++;
        
        p = strtok(NULL, "!,. ");
    }

    sortCuvant(cuv,n);

    for (int i = 0; i < n; i++)
    {
        cout << cuv[i].content << " " << cuv[i].aparitie << '\n';
    }

    return 0;
}
