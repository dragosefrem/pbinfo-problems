#include <iostream>
#include <cstring>

using namespace std;

int anagrame(char s1[], char s2[])
{
    if (strlen(s1) != strlen(s2))
        return 0;
    else
    {
        int frecv1[100] = {0}, frecv2[100] = {0};
        for (int i = 0; i < strlen(s1); i++)
        {
            if (s1[i] >= 'a' && s1[i] <= 'z')
                s1[i] = s1[i] - 32;
            frecv1[s1[i]]++;
        }
        for (int i = 0; i < strlen(s2); i++)
        {
            if (s2[i] >= 'a' && s2[i] <= 'z')
                s2[i] = s2[i] - 32;
            frecv2[s2[i]]++;
        }
        int OK = 1;
        for (int i = 'A'; i <= 'Z'; i++)
        {
            if (frecv1[i]!=frecv2[i])
                OK = 0;
        }

        return OK;

    }
}


int main()
{
    char s1[21],s2[21];
    cin >> s1 >> s2;
    cout << anagrame(s1,s2);

    return 0;
}
