#include <iostream>
#include <cstring>

using namespace std;

void formareSeparator(char sep[])
{
    int n = 0;
    for (char i = 32; i < 127; i++)
    {
        if (i >= 'A' && i <= 'Z')
            continue;
        if (i >= 'a' && i <= 'z')
            continue;
        sep[n] = i;
        n++;
    }
}

char prop[256],sep[80],cuv[128][256], *p;
int n;

int main()
{
    cin.getline(prop,256);
    formareSeparator(sep);

    p = strtok(prop, sep);
    while (p != NULL)
    {
        strcpy(cuv[n],p);
        p = strtok(NULL, sep);
        n++;
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        cout << cuv[i] << '\n';
        cout << cuv[j] << '\n';
        i++;
        j--;
    }

    if (i == j)
        cout << cuv[i];

    return 0;

}
