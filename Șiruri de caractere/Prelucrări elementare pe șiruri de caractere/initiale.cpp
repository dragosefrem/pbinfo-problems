#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256];
    cin.getline(s,256);
    for (int i = 0; i < strlen(s); i++)
    {
        if ((i == 0 || s[i-1] == ' ' || s[i+1] == ' ' || s[i+1] == '\0') && s[i] != ' ')
            s[i] = s[i] - 32;
    }
    cout << s;
    return 0;
}
