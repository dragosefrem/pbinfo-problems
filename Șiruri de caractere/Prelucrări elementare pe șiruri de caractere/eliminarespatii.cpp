#include <iostream>
#include <cstring>

using namespace std;

void eliminareSpatiiInceput(char s[])
{
    while(s[0] == ' ')
    {
        char aux[256];
        strcpy(aux,s+1);
        strcpy(s,aux);
    }
}

void eliminareSpatiiSfarsit(char s[])
{
    while(s[strlen(s)-1] == ' ')
        s[strlen(s)-1] = s[strlen(s)];
}

void eliminareSpatiiCuvinte(char s[])
{
    char *p = strchr(s, ' ');
    while (p!=NULL)
    {
        while (*(p+1)==' ')
        {
            char aux[256];
            strcpy(aux,p+1);
            strcpy(p,aux);
        }
        p = strchr(p+1,' ');
    }

}

int main()
{
    char s[256];
    cin.getline(s,256);
    eliminareSpatiiInceput(s);
    eliminareSpatiiSfarsit(s);
    eliminareSpatiiCuvinte(s);
    cout << s;

    return 0;
}
