#include <fstream>
#include <cstring>

using namespace std;

void sorteaza(char cuv[][21], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(cuv[j],cuv[i]) < 0)
            {
                char aux[21];
                strcpy(aux,cuv[j]);
                strcpy(cuv[j],cuv[i]);
                strcpy(cuv[i],aux);
            }
        }
    }
}

char s[251],cuv[125][21];
int n;

ifstream fin("sortcuv.in");
ofstream fout("sortcuv.out");

int main()
{
    fin.getline(s,251);
    char *p = strtok(s," ");

    while (p != NULL)
    {
        strcpy(cuv[n],p);
        n++;
        p = strtok(NULL, " ");
    }

    sorteaza(cuv,n);

    for (int i = 0; i < n; i++)
    {
        fout << cuv[i] << '\n';
    }


    return 0;

}
