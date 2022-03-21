#include <fstream>
#include <cstring>

using namespace std;

int pozAparitieCaracter(char s[], char c)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
            return i;
    }
    return -1;
}

void eliminareSpatiiSfarsit(char s[])
{
    while(s[strlen(s)-1] == ' ')
        s[strlen(s)-1] = s[strlen(s)];
}

ifstream fin("criptare1.in");
ofstream fout("criptare1.out");

int main()
{
    char s[1001],cod[21],m[202][21];
    fin.getline(s,1001);
    fin.getline(cod,21);
    int dimCod = strlen(cod);
    int k = 0, numberOfWords = strlen(s)/strlen(cod);
    for (int i = 1; i <= dimCod; i++)
    {
        for (int j = 1; j <= numberOfWords; j++)
        {
            m[j][i] = s[k];
            k++;
        }
    }

    int nr = 1;

    for (int i = 'a'; i <= 'z'; i++)
    {
        int poz = pozAparitieCaracter(cod,i);
        if (poz > -1)
        {
            cod[poz] = nr + '0';
            nr++;
        }
    }

    k = 0;

    for (int i = 1; i <= numberOfWords; i++)
    {
        for (int j = 0; j < dimCod; j++)
        {
            int col = cod[j] - '0';
             if (m[i][col] == '*')
                m[i][col] = ' ';
            s[k] = m[i][col];
            k++;
        }
    }
    eliminareSpatiiSfarsit(s);
    fout << s;


    return 0;
}
