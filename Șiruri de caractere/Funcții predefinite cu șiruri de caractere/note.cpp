#include <iostream>
#include <cstring>

using namespace std;

char note[7][4] = {"DO","RE","MI","FA","SOL","LA","SI"};

int areNote(char s[])
{
    for (int i = 0; i < 7; i++)
    {
        if (strstr(s,note[i]))
            return 1;
    }
    return 0;
}

char s[101], *p;
int OK;

int main()
{

    cin.getline(s,101);
    p = strtok(s, " ");

    while (p != NULL)
    {
        if (areNote(p))
        {
            cout << p << '\n';
            OK = 1;
        }
        p = strtok(NULL, " ");
    }

    if (!OK)
        cout << "nu exista";

    return 0;

}
