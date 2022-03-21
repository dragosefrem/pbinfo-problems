#include <fstream>
#include <cstring>

using namespace std;

ifstream fin ("paritatesiruri.in");
ofstream fout ("paritatesiruri.out");

void sirImpar(char s[])
{
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (i%2 == 1)
        {
            fout << s[i];
        }
    }

    fout << " ";
}

void sirPar(char s[])
{
    int k = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (i%2 == 0)
        {
            fout << s[i];
        }
    }
    fout << '\n';
}

int main()
{
    char s[10001];
    int k;
    fin >> k;
    for (int i = 0; i < k; i++)
    {
        fin >> s;
        sirImpar(s);
        sirPar(s);
    }
    return 0;
}
