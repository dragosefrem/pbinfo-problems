#include <iostream>
#include <cstring>

using namespace std;

int doarVocale(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (!strchr("aeiou",s[i]))
            return 0;
    }
    return 1;
}

int main()
{
    char s[256], *p;
    cin.getline(s,256);
    p = strtok(s, " ");
    while (p != NULL)
    {
        if (doarVocale(p))
            cout << p << '\n';
        p = strtok(NULL, " ");
    }

    return 0;

}
