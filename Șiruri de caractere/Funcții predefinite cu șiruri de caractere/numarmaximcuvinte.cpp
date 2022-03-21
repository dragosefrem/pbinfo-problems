#include <fstream>
#include <cstring>

using namespace std;

int nrCuvinte(char s[])
{
    int nr = 0, OK = 0, dim = strlen(s);

    for (int i = 0; i <= dim; i++)
    {
        if (s[i] != ' ' && s[i])
            OK = 1;
        if (OK == 1 && ((s[i] == ' ' && s[i+1] != ' ') || !s[i]))
            nr++;
    }

    return nr;
}

char prop[256],result[256];
int n;

ifstream fin("cuvmax.in");
ofstream fout("cuvmax.out");

int main()
{
    fin >> n; fin.get();

    for (int i = 0; i < n; i++)
    {
        fin.getline(prop,256);
        if (nrCuvinte(prop) > nrCuvinte(result))
            strcpy(result,prop);
    }

    fout << result;

    return 0;

}
