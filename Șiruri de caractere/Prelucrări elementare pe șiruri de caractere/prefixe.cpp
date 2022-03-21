#include <iostream>
#include <cstring>

using namespace std;

void prefix(char s[])
{

    int i = 0;
    while (strlen(s+i)>0)
    {
        cout << s + i << '\n';
        i++;
    }
}

void sufix (char s[])
{
    char aux[11];
    strcpy(aux,s);
    while (strlen(aux) > 0)
    {
        cout << aux << '\n';
        aux[strlen(aux)-1] = '\0';
    }
}

int main()
{
    char s[11];
    cin >> s;
    sufix(s);
    prefix(s);


    return 0;
}
