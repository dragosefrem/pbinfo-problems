#include <iostream>
#include <cstring>

using namespace std;

char s[101], *p;
int n, OK;

int main()
{
    cin.getline(s,101);
    cin >> n;
    p = strtok(s, " ");
    while (p != NULL)
    {
        if (strlen(p) == n)
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
