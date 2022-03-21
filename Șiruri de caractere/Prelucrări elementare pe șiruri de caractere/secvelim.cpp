#include <iostream>
#include <cstring>

using namespace std;

void sterge(char s[], int n, int m)
{
    for (int k = m; k >= n; k--)
    {
        for (int i = k; i < strlen(s);i++)
            s[i] = s[i+1];
    }

}

char transformare(char c)
{
    if (c >= 'a')
        c-=32;
    return c;
}

char s[256],c;

int main()
{
    cin >> s;
    int inceputSecv = -1, sfarsitSecv = -1, setat = 0;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (inceputSecv == -1 && setat == 0)
        {
            inceputSecv = i;
            c = transformare(s[i]);
            setat = 1;
        }
        else if (transformare(s[i]) != c && setat == 1)
        {
            sfarsitSecv = i-1;
            setat = 0;
        }

        if (inceputSecv > -1 && sfarsitSecv > -1)
        {
            if (sfarsitSecv - inceputSecv > 0)
            {
                sterge(s,inceputSecv,sfarsitSecv);
                i = -1;
            }
            else
                i--;

            inceputSecv = -1;
            sfarsitSecv = -1;
        }

    }

    cout << s;

    return 0;
}
