#include <fstream>
#include <cstring>

using namespace std;

int nrVocale(char s[])
{
    int nr = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (strchr("aeiou",s[i])!=NULL)
            nr++;
    }
    return nr;
}

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int main()
{

    char propozitii[100][251];
    int n;
    fin >> n; fin.get();

    int maxim = -1, poz = -1;

    for (int i = 0; i < n; i++)
    {
        char s[251];
        fin.getline(s,251);
        strcpy(propozitii[i],s);
        if (nrVocale(s) > maxim)
        {
            maxim = nrVocale(s);
            poz = i;
        }
    }

    fout << propozitii[poz];


    return 0;
}
