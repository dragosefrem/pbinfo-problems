#include <fstream>
#include <cstring>

using namespace std;

int doarVocale(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (!strchr("aeiou",s[i]))
            return 0;
    }
    return 1;
}

ifstream fin("doarvocale.in");
ofstream fout("doarvocale.out");

int main()
{
    char s[31];
    int n,nr = 0;
    fin >> n;

    for (int i = 0; i < n; i++)
    {
        fin >> s;
        if (doarVocale(s))
            nr++;
    }

    fout << nr;

    return 0;
}
