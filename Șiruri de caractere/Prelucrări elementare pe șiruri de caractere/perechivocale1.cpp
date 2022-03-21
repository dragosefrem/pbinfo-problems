#include <fstream>
#include <cstring>

using namespace std;

struct pereche
{
    char content[3];
    int aparitie = 0;
}p[25];

int checkIfAlready(pereche p[], char ch[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(p[i].content,ch)==0)
            return i;
    }
    return -1;
}

int doarVocale(char s[])
{
    for (int i = 0; i < strlen(s); i++)
        if (!strchr("aeiou",s[i]))
            return 0;
    return 1;
}

void interschimbarePerechi(pereche& p1, pereche& p2)
{
    pereche aux = p1;
    p1 = p2;
    p2 = aux;
}

void sortByLength(pereche p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[j].aparitie > p[i].aparitie)
                interschimbarePerechi(p[j],p[i]);
            else if (p[j].aparitie == p[i].aparitie)
            {
                if (strcmp(p[j].content,p[i].content) < 0)
                    interschimbarePerechi(p[j],p[i]);
            }
        }
    }
}

ifstream fin("perechivocale1.in");
ofstream fout("perechivocale1.out");

char cuv[41],s[3],c;

int main()
{
    int k = 0;
    while (fin >> cuv)
    {
        for (int i = 0; i < strlen(cuv)-1; i++)
        {
            strncpy(s,cuv+i,2);
            if (doarVocale(s))
            {
                int i = checkIfAlready(p,s,k);
                if (i == -1)
                {
                    strcpy(p[k].content,s);
                    p[k].aparitie++;
                    k++;
                }
                else
                    p[i].aparitie++;
            }
        }
    }

    sortByLength(p,k);

    int maximAparitie = p[0].aparitie;

    for (int i = 0; i < k; i++)
    {
        if (p[i].aparitie == maximAparitie)
            fout << p[i].content << " ";
        else
            break;
    }

    return 0;
}
