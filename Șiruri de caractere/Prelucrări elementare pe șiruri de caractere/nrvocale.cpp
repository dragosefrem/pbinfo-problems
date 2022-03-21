#include <iostream>
#include <cstring>

using namespace std;

void transformareMajuscule(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
}

char aparitieMaximaVocala(char s[])
{
    int frecv[100] = {0};
    char voc[] = "AEIOU";
    for (int i = 0; i < strlen(s); i++)
    {
        if (strchr(voc,s[i])!=NULL)
            frecv[s[i]]++;
    }
    int maxim = frecv[voc[0]];
    char c = voc[0];
    for (int i = 1; i < strlen(voc); i++)
    {
        if (frecv[voc[i]] > maxim)
        {
            maxim = frecv[voc[i]];
            c = voc[i];
        }
        else if (frecv[voc[i]] == maxim)
        {
            if (voc[i] < c)
                c = voc[i];
        }
    }
    return c;
}

int main()
{
    char s[256];
    cin.getline(s,256);
    transformareMajuscule(s);
    cout << aparitieMaximaVocala(s);

    return 0;
}
