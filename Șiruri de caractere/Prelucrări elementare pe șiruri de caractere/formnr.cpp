#include <iostream>
#include <cstring>

using namespace std;

int returneazaNumarul(char s[], int n, int m)
{
    int nr = 0;
    for (int i = n; i <= m; i++)
    {
        nr = nr * 10 + (s[i] - '0');
    }
    return nr;
}

int main()
{
    char s[256];
    cin.getline(s,256);
    int sum = 0, incepNr = -1;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9' && incepNr == -1)
            incepNr = i;
        else if ((s[i] < '0' || s[i] > '9') && incepNr > -1)
        {
            sum = sum + returneazaNumarul(s,incepNr,i-1);
            incepNr = -1;
        }
    }

    cout << sum;
    return 0;
}
