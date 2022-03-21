#include <fstream>
#include <cstring>

using namespace std;

char link[101],cuv[20][21];
short int n,nr;

ifstream fin("pbinfo.in");
ofstream fout("pbinfo.out");

int main()
{
    fin >> link >> n;

    if (strstr(link,"virus"))
    {
        fout << "DA";
        return 0;
    }

    while(nr < n)
    {
        fin >> cuv[nr];
        nr++;
    }

    for (int i = 0; i < n; i++)
    {
        if (strstr(link,cuv[i]))
        {
            fout << "DA";
            return 0;
        }
    }

    fout << "NU";
    return 0;

}
