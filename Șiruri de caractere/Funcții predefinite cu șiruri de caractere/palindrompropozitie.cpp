#include <fstream>
#include <cstring>

using namespace std;

int palindrom(char s[])
{
    int n = 0, m = strlen(s)-1;
    while (n < m)
    {
        if (s[n] != s[m])
            return 0;
        n++;
        m--;
    }
    return 1;
}

void eliminaSpatii(char s[])
{
    for (int i = strlen(s)-1; i >= 0; i--)
    {
        int dim = strlen(s);
        if (s[i] == ' ')
        {
            for (int j = i; j < dim; j++)
                s[j] = s[j+1];
        }
    }
}

char prop[201];
int res[99],n,k;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int main()
{
    fin >> n; fin.get();

    for (int i = 0; i < n; i++)
    {
        fin.getline(prop,201);
        eliminaSpatii(prop);
        res[k] = palindrom(prop);
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        fout << res[i] << '\n';
    }

    return 0;

}
