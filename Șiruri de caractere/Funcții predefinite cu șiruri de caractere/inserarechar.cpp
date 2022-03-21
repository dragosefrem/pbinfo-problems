#include <fstream>
#include <cstring>

using namespace std;

void inserarePoz(char s[], int poz)
{
    for (int i = strlen(s); i > poz; i--)
        s[i] = s[i-1];

}

char cuv[16], s[384], *p;
bool OK;

ifstream fin("inserarechar.in");
ofstream fout("inserarechar.out");

int main()
{
    fin >> cuv; fin.get();
    fin.getline(s,256);

    int dim = strlen(cuv);
    p = strstr(s,cuv);

    while (p != NULL)
    {
        int poz = p-s;
        if (strchr(" ",p[dim]) && (poz==0 || strchr(" ",s[poz-1])))
        {
            OK = true;
            inserarePoz(p,dim);
            p[dim] = '?';
        }
        p = strstr(p+1,cuv);
    }
    if (OK)
        fout << s;
    else
        fout << "NU APARE";

    return 0;

}
