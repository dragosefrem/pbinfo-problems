#include <cstring>

void Trim(char s[])
{
    while (s[0] == ' ')
    {
        char aux[101];
        strcpy(aux,s+1);
        strcpy(s,aux);
    }
    while (s[strlen(s)-1] == ' ')
    {
        char aux[101];
        strcpy(aux,s+strlen(s));
        strcpy(s+strlen(s)-1,aux);
    }
}