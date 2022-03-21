#include <fstream>
#include <cstring>

using namespace std;

void eliminare(char s[], int poz, int nr)
{
    int dim = strlen(s);
    for (int i = poz; i < dim; i++)
    {
        if (!s[i])
            break;
        s[i] = s[i+nr];
    }
}

void loc(char s[], int poz, int nr)
{
   for (int i = strlen(s)+nr-1; i > poz; i--)
        s[i] = s[i-nr];
}

char s[561],a[11],b[11];

ifstream fin("inlocuirecuvant.in");
ofstream fout("inlocuirecuvant.out");

int main()
{
    fin >> a >> b; fin.get();
    fin.getline(s,101);

    int dif = strlen(b) - strlen(a);
    int inceputCuv = -1, dim = strlen(s), dimB = strlen(b);

    for (int i = 0; i <= dim; i++)
    {
        if (s[i] != ' ' && inceputCuv == -1)
            inceputCuv = i;
        else if ((s[i] == ' ' || !s[i]) && inceputCuv > -1)
        {
            char aux[11] = {};
            strncpy(aux,s+inceputCuv,i-inceputCuv);
            if (!strcmp(aux,a))
            {
                if (dif > 0)
                {
                    loc(s,i,dif);
                    i+=(dif);
                    dim = strlen(s);
                }
                else if (dif < 0)
                {
                    eliminare(s,i+dif,-dif);
                    i-=(-dif);
                    dim = strlen(s);
                }
                strncpy(s+inceputCuv,b,dimB);
            }
            inceputCuv = -1;
        }
    }

    fout << s;

    return 0;

}
