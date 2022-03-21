#include <iostream>
#include <cstring>

using namespace std;

void eliminareLitera(char s[], int k)
{
    for (int i = k; i < strlen(s); i++)
        s[i] = s[i+1];
}

int main()
{
    char s[101];
    cin.getline(s,101);
    int inceputCuvant = -1, sfarsitCuvant = -1, setat = 0, OK = 0;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' && setat == 0)
        {
            inceputCuvant = i;
            setat = 1;
        }
        else if ((s[i] == ' ' || s[i] == '\0') && inceputCuvant > -1)
        {
            sfarsitCuvant = i-1;
            setat = 0;
        }

        if (inceputCuvant > - 1 && sfarsitCuvant > -1)
        {
            int dim = sfarsitCuvant - inceputCuvant + 1;
            if (dim % 2 == 1 && dim >= 3)
            {
                OK = 1;
                eliminareLitera(s,(inceputCuvant+sfarsitCuvant)/2);
                i--;
            }
            inceputCuvant = -1;
            sfarsitCuvant = -1;
        }
    }

    if (OK == 1)
        cout << s;
    else
        cout << "nu exista";

    return 0;
}
