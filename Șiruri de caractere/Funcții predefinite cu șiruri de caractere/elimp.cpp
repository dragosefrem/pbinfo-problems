#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int p;

int main()
{
    cin >> p >> s;

    for (int i = 0; s[i+p-1]; i++)
    {
        for (int j = 0; j < strlen(s); j++)
        {
            if (j < i || j > i + p - 1)
                cout << s[j];
        }
        cout << endl;
    }

    return 0;

}
