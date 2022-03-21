#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[1000000];
    int n,x;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x%2 == 0)
        {
            int k = strlen(s);
            for (int j = 0; j < x; j++)
            {
                s[k+j] = s[j];
            }
            s[k+x] = '\0';
        }
        else
        {
            int k = strlen(s),nr = 0;
            for (int j = x - 1; j >= 0; j--)
            {
                s[k + nr] = s[j];
                nr++;
            }
            s[k + nr] = '\0';
        }
    }

    cout << s;


    return 0;
}
