#include <iostream>
#include <cstring>

using namespace std;

void transformareLiteraMica(char s[])
{
    int dim = strlen(s);
    for (int i = 0; i < dim; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
}

int palindrom (char s[])
{
    char aux[21];
    strcpy(aux,s);
    transformareLiteraMica(aux);
    int i = 0, j = strlen(aux)-1;
    while (i < j)
    {
        if (aux[i] != aux[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

char s[256],cuv[21],*p;

int main()
{
    cin.getline(s,256);
    p = strtok(s,":;., ");

    while (p != NULL)
    {
        if (palindrom(p) && strlen(p) > strlen(cuv))
            strcpy(cuv,p);
        p = strtok(NULL, ":;., ");
    }

    cout << cuv;

    return 0;

}
