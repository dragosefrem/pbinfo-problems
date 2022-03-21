#include <iostream>
#include <cstring>

using namespace std;

int prezentaLitera(char s[], int n, int m)
{
    for (int i = n; i <= m; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
            return 1;
    }
    return 0;
}

void reverseWord(char s[], int n, int m)
{
    int k = 0;
    for (int i = n; i <= (n+m)/2; i++)
    {
        char aux = s[i];
        s[i] = s[m-k];
        s[m-k] = aux;
        k++;
    }
}

int main()
{

    char s[256];
    cin.getline(s,256);

    int inceputCuvant[150] = {-1}, sfarsitCuvant[150] = {-1}, setat = 0;
    int k1 = 0, k2 = 0;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] != ' ' && setat == 0)
        {
            inceputCuvant[k1] = i;
            setat = 1;
            k1++;

        }
        else if ((s[i] == ' ' || s[i] == '\0') && setat == 1)
        {
            sfarsitCuvant[k2] = i - 1;
            setat = 0;
            k2++;
        }
    }

    int maxim = -1;

    for (int i = 0; i < k1; i++)
    {
        if (sfarsitCuvant[i] - inceputCuvant[i] > maxim && prezentaLitera(s,inceputCuvant[i],sfarsitCuvant[i]))
            maxim = sfarsitCuvant[i] - inceputCuvant[i];
    }

    for (int i = 0; i < k1; i++)
    {
        if (sfarsitCuvant[i] - inceputCuvant[i] == maxim)
        {
            if(prezentaLitera(s,inceputCuvant[i],sfarsitCuvant[i]))
                reverseWord(s,inceputCuvant[i],sfarsitCuvant[i]);
        }
    }

    cout << s;

    return 0;
}
