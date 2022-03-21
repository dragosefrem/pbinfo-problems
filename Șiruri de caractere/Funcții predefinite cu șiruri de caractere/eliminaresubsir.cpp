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
        eliminare(s,p-s,dimT);
        p = strstr(p,t);
    }

    cout << s;

    return 0;

}
