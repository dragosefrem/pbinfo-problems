#include <iostream>
#include <cstring>

using namespace std;

char s[10001];
int frecv[30];

int main()
{
    cin >> s;
    int nrCaractere = 0, minim = 10001;

    for (int i = 0; i < strlen(s); i++)
    {
        if (frecv[s[i]-'a'] == 0)
        {
            frecv[s[i]-'a'] = 1;
            nrCaractere++;
        }
    }

    int k = 0,inceput = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (frecv[s[i]-'a'] == 1)
            k++;
        frecv[s[i]-'a']++;
        if (k == nrCaractere)
        {
            int x = i - inceput + 1;
            while(frecv[s[inceput]-'a'] - 1 > 1)
            {
                frecv[s[inceput]-'a']--;
                x--;
                inceput++;
            }
            if (x < minim)
                minim = x;
            if (minim == nrCaractere)
                break;
        }
    }

    cout << minim;

    return 0;
}
