#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int cases(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    else
        return (c - 'A' + 10);
}

int transformareBaza10(char s[])
{
    int n = 0, k = 0;
    for (int i = strlen(s)-1; i>=0; i--)
    {
        n = n + cases(s[i])*pow(16,k);
        k++;
    }

    return n;
}


char s[10];

int main()
{
    cin.getline(s,10);
    cout << transformareBaza10(s);
    return 0;
}
