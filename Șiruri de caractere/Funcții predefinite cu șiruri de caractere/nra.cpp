#include <iostream>
#include <cstring>

using namespace std;

char s[71], *p;
int nr;

int main()
{
    cin.getline(s,71);
    p = strtok(s," ");

    while (p)
    {
        if (strchr(p,'a'))
            nr++;
        p = strtok(NULL," ");
    }

    cout << nr;

    return 0;

}
