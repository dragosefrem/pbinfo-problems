#include <iostream>
#include <cstring>

using namespace std;

int areParteFractionara(char s[], int n, int m)
{
    int OK = 0;
    for (int i = n; i <= m; i++)
    {
        if (!strchr("0123456789.",s[i]) || (i == m && OK == 0))
            return 0;
        if (s[i] == '.')
            OK = 1;
    }
    return 1;
}


void eliminare(char s[], int poz, int nr)
{
    int dim = strlen(s);
    for (int i = poz; i < dim; i++)
    {
        if (!s[i])
            break;
        s[i] = s[i+nr];
    }
}

char s[101];


int main()
{
    cin.getline(s,101);

    int sfarsitCuvant = -1;
    for (int i = strlen(s)-1; i >= 0; i--)
    {
        if (s[i] != ' ' && sfarsitCuvant == -1)
            sfarsitCuvant = i;
        else if ((s[i] == ' ' || i == 0) && sfarsitCuvant > -1)
        {
            if (i == 0)
            {
                if (areParteFractionara(s,i,sfarsitCuvant))
                    eliminare(s,i,sfarsitCuvant-i+1);
            }
            else
            {
                if (areParteFractionara(s,i+1,sfarsitCuvant))
                    eliminare(s,i+1,sfarsitCuvant-i);
            }
            sfarsitCuvant = -1;
        }
    }

    cout << s;

    return 0;

}
