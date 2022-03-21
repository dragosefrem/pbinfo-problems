#include <fstream>
#include <cstring>

using namespace std;

void invers(char s[], char inv[])
{
    strcpy(inv,s);
    int k = 0;
    for (int i = 0; i <= (strlen(inv)-1)/2; i++)
    {
        char aux = inv[i];
        inv[i] = inv[strlen(inv)-1-k];
        inv[strlen(inv)-1-k] = aux;
        k++;
    }
}

int estePalindrom(char s[])
{
    char inv[21];
    invers(s,inv);
    if (strcmp(s,inv)==0)
        return 1;
    else
        return 0;
}

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int main()
{

    int palindrom[100],n;
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        char cuv[21];
        fin >> cuv;
        palindrom[i] = estePalindrom(cuv);
    }

    for (int i = 0; i < n; i++)
        fout << palindrom[i] << '\n';

    return 0;
}
