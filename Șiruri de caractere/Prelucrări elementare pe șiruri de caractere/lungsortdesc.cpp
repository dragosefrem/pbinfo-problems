#include <iostream>
#include <cstring>

using namespace std;

void swapWords(char s1[], char s2[])
{
    char aux[50];
    strcpy(aux,s1);
    strcpy(s1,s2);
    strcpy(s2,aux);
}

void sortByLength(char s[][50], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(s[j]) > strlen(s[i]))
                swapWords(s[j],s[i]);
            else if (strlen(s[j]) == strlen(s[i]))
            {
                if (strcmp(s[j],s[i]) < 0)
                    swapWords(s[j],s[i]);
            }
        }
    }
}

int main()
{
    char s[256],cuv[150][50];
    cin.getline(s,256);
    char *p = strtok(s," ");
    int n = 0;
    while (p!=NULL)
    {
        strcpy(cuv[n],p);
        n++;
        p = strtok(NULL, " ");
    }
    sortByLength(cuv,n);
    for (int i = 0; i < n; i++)
        cout << cuv[i] << '\n';

    return 0;
}
