#include <iostream>
#include <cstring>

using namespace std;

int esteLitraMica(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

char s[256];

int main()
{
    cin.getline(s,256);

    int inceputCuvant = -1, sfarsitCuvant = -1, setat = 0;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (esteLitraMica(s[i]) && setat == 0)
        {
            inceputCuvant = i;
            setat = 1;
        }
        else if (!esteLitraMica(s[i]) && setat == 1)
        {
            sfarsitCuvant = i - 1;
            setat = 0;
        }

        if (inceputCuvant > -1 && sfarsitCuvant > -1)
        {
            int dim = sfarsitCuvant - inceputCuvant + 1;
            if (dim == 3)
            {
                char temp[256];
                strcpy(temp,s+sfarsitCuvant+1);
                strcpy(s+inceputCuvant+1,temp);
                s[inceputCuvant] = '*';
                i-=2;
            }
            inceputCuvant = -1;
            sfarsitCuvant = -1;
        }
    }


    cout << s;

    return 0;
}
