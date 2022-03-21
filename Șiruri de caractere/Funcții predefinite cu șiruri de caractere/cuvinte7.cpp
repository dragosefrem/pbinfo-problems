#include <iostream>
#include <cstring>

using namespace std;

char cuv[20][21],ramase[20][21],s[401];
int n,k,kR;

int main()
{
    cin >> n; cin.get();

    for (int i = 0; i < n; i++)
        cin.getline(cuv[i],21);

    cin >> k;

    int OK = 1;

    for (int i = 0; i < n; i++)
    {
        if (strlen(cuv[i]) == k)
        {
            if (OK)
            {
                strcpy(s,cuv[i]);
                OK = 0;
            }
            else
            {
                strcat(s," ");
                strcat(s,cuv[i]);
            }
        }
        else
        {
            strcpy(ramase[kR],cuv[i]);
            kR++;
        }
    }

    for (int i = 0; i < kR; i++)
    {
        if (OK)
        {
            strcpy(s,ramase[i]);
            OK = 0;
        }
        else
        {
            strcat(s," ");
            strcat(s,ramase[i]);
        }
    }

    cout << s;

    return 0;

}
