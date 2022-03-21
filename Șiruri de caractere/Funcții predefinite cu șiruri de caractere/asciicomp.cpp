#include <iostream>
#include <cstring>

using namespace std;

struct cuvant
{
    char content[256];
    int sumAscii = 0;
}cuv[128];

void sorteaza(cuvant cuv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cuv[j].sumAscii < cuv[i].sumAscii)
            {
                cuvant aux;
                aux = cuv[i];
                cuv[i] = cuv[j];
                cuv[j] = aux;
            }
        }
    }
}

int areLitera(char s[])
{
    int dim = strlen(s);
    for (int i = 0; i < dim; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            return 1;
        if (s[i] >= 'a' && s[i] <= 'z')
            return 1;
    }
    return 0;
}

char s[256], *p;
int n;

int main()
{
    cin.getline(s,256);
    p = strtok(s," ");

    while (p)
    {
        if (areLitera(p))
        {
            strcpy(cuv[n].content,p);
            int dim = strlen(cuv[n].content);
            for (int i = 0; i < dim; i++)
                cuv[n].sumAscii+=cuv[n].content[i];
            n++;
        }

        p = strtok(NULL, " ");
    }

    sorteaza(cuv,n);

    int OK = 1, k = cuv[0].sumAscii;

    for (int i = 0; i < n; i++)
    {
        if (OK)
        {
            cout << cuv[i].sumAscii;
            OK = 0;
        }

        if (cuv[i].sumAscii != k)
        {
            k = cuv[i].sumAscii;
            OK = 1;
            cout << endl;
            i--;
            continue;
        }

        cout << " " << cuv[i].content;
    }

    if (!n)
        cout << "NU EXISTA";

    return 0;

}
