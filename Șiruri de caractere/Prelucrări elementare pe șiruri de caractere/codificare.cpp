#include <iostream>
#include <cstring>

using namespace std;

char s1[101],s2[101],cod[101];

int main()
{
    cin.getline(s1,101);
    cin.getline(s2,101);
    int k = strlen(s1) - strlen(s2);

    if (k == 0)
    {
        for (int i = 0; i < strlen(s2); i++)
        {
            int n = s2[i] - '0';
            if (n % 2 == 0)
            {
                for (int j = strlen(cod); j >= 1; j--)
                    cod[j] = cod[j-1];
                cod[0] = s1[i];
            }
            else
                cod[strlen(cod)] = s1[i];
        }
        cout << cod;
    }
    else cout << "cod incorect";

    return 0;
}
