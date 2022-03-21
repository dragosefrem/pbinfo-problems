#include <fstream>
#include <cstring>

using namespace std;

void sorteaza(char cuv[][31], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(cuv[j],cuv[i]) < 0)
            {
                char aux[31];
                strcpy(aux,cuv[j]);
                strcpy(cuv[j],cuv[i]);
                strcpy(cuv[i],aux);
            }
        }
    }
}

char cuv[200][31];
int n;

ifstream fin("sortarecuvinte1.in");
ofstream fout("sortarecuvinte1.out");

int main()
{

    while (fin >> cuv[n])
        n++;

    sorteaza(cuv,n);

    for (int i = 0; i < n; i++)
    {
        fout << cuv[i] << '\n';
    }


    return 0;

}
