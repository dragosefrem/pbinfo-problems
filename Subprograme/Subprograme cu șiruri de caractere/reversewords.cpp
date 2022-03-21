#include <cstring>

void rev(char s[], int n, int m)
{
    while (n < m)
    {
        char aux = s[n];
        s[n] = s[m];
        s[m] = aux;
        n++;
        m--;
    }
}

void ReverseWords(char s[])
{
    int inceputCuvant = 0;
    int dim = strlen(s);
    for (int i = 0; i <= dim; i++)
    {
        if (s[i] == ' ' || !s[i])
        {
            rev(s,inceputCuvant,i-1);
            inceputCuvant = i + 1;
            i++;
        }
    }

    rev(s,0,dim-1);
}