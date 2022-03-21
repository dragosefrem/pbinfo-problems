#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int frecv[25];

int main()
{

    cin.getline(s,256);
    int dim = strlen(s);
    for (int i = 0; i < dim; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' && frecv[s[i]-'a'] == 0)
        {
            cout << s[i] << " ";
            frecv[s[i]-'a']++;
        }
    }

    return 0;

}
