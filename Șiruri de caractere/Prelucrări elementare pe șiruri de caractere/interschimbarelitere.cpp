#include <iostream>
#include <cstring>

using namespace std;

void primaVocala(char s[], int& k)
{
    k = -1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (strchr("AEIOUaeiou",s[i])!=NULL)
        {
            k = i;
            break;
        }
    }
}

void ultimaConsoana(char s[], int& k)
{
    k = -1;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (strchr("AEIOUaeiou",s[i])==NULL)
        {
            k = i;
            break;
        }
    }
}

void interschimbare(char& a, char& b)
{
    char aux = a;
    a = b;
    b = aux;
}

int main()
{
    char s[11];
    cin >> s;

    int pozVocala, pozConsoana;
    primaVocala(s,pozVocala);
    ultimaConsoana(s,pozConsoana);

    if (pozVocala == -1 || pozConsoana == -1)
        cout << "IMPOSIBIL";
    else
    {
        interschimbare(s[pozVocala],s[pozConsoana]);
        cout << s;
    }

    return 0;
}
