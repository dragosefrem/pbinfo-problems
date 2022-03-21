#include <iostream>
#include <cstring>

using namespace std;

int consoana(char s[], int i)
{
    if (strchr("aeiou.,?! ",s[i])==NULL)
        return 1;
    else
        return 0;
}

int vocala(char s[], int i)
{
    if (strchr("aeiou",s[i])!=NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char s[256];
    cin.getline(s,256);
    int nr = 0;
    for (int i = 1; i < strlen(s) - 1; i++)
    {
        if (consoana(s,i-1)&& vocala(s,i) && consoana(s,i+1))
        {
            nr++;
            i++;
        }
    }
    cout << nr;
    return 0;
}
