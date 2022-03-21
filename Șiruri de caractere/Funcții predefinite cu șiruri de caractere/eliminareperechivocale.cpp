#include <iostream>
#include <cstring>

using namespace std;

int esteVocala(char c)
{
    if (strchr("aeiou",c) && c)
        return 1;
    return 0;
}

void eliminare(char s[], int poz, int k)
{
    int dim = strlen(s);
    for (int i = poz; i < dim; i++)
    {
        s[i] = s[i+k];
        if (!s[i])
            break;
    }
}

char s[256];

int main()
{

    cin.getline(s,256);
    int check = 0;

    for (int i = 0; s[i]; i++)
    {
        if (esteVocala(s[i]) == 1 && esteVocala(s[i+1]) == 1)
        {
            eliminare(s,i,2);
            check = 1;
            i--;
        }
        else if (check == 1)
        {
            if (esteVocala(s[i]))
                eliminare(s,i,1);
            check = 0;
        }
    }


    cout << s;

    return 0;

}
