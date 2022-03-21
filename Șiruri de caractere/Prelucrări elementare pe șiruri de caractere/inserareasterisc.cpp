#include <iostream>
#include <cstring>

using namespace std;

void InserareAsterisc(char s[], int& OK)
{
    OK = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (strchr("aeiou",s[i])!=NULL)
        {
            char aux[101];
            strcpy(aux,s+i+1);
            strcpy(s+i+1,"*");
            strcat(s,aux);
            OK = 1;
        }
    }
}

int main()
{
    char s[101];
    int OK;
    cin.getline(s,101);
    InserareAsterisc(s,OK);
    if (OK == 0)
        cout << "FARA VOCALE";
    else
        cout << s;
    return 0;
}
