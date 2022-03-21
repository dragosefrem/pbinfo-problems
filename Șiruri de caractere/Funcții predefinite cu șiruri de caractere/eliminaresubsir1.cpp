#include <iostream>
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

char s[256], t[256], *p;


int main()
{
    cin.getline(s,256);
    cin.getline(t,256);
    p = strstr(s,t);

    int dimT = strlen(t);

    while (p != NULL)
    {
        char *q = p;
        p = strstr(p+1,t);
        if (p == NULL)
            eliminare(s,(q-s),dimT);

    }

    cout << s;

    return 0;

}
