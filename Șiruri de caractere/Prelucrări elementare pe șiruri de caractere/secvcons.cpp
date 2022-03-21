#include <iostream>
#include <cstring>

using namespace std;

int esteConsoana (char c)
{
    if (strchr("aeiou",c))
        return 0;
    return 1;
}

char s[256],secv[256];

int main()
{


    cin >> s;

    int inceputMaxSecv = -1, sfarsitMaxSecv = -1, setat = 0;

    for (int i = 0; i <= strlen(s); i++)
    {
        if (esteConsoana(s[i]) && setat == 0)
        {
            inceputMaxSecv = i;
            setat = 1;
        }
        else if (!esteConsoana(s[i]) && setat == 1)
        {
            sfarsitMaxSecv = i - 1;
            setat = 0;
        }

        if (inceputMaxSecv > -1 && sfarsitMaxSecv > -1)
        {
            int dim = sfarsitMaxSecv - inceputMaxSecv + 1;
            if (dim >= strlen(secv))
                strncpy(secv,s+inceputMaxSecv,dim);
            inceputMaxSecv = -1;
            sfarsitMaxSecv = -1;
        }
    }

    cout << secv;

    return 0;
}
