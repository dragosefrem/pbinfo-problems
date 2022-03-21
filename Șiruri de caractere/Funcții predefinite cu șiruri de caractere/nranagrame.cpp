#include <iostream>
#include <cstring>

using namespace std;

bool anagrama(char s1[], char s2[])
{
    if (!strcmp(s1,s2))
        return false;
    int lit[26] = {};
    int dim1 = strlen(s1), dim2 = strlen(s2);
    if (dim1 != dim2)
        return false;
    for (int i = 0; i < dim1; i++)
        lit[s1[i]-'a']++;
    for (int i = 0; i < dim2; i++)
        lit[s2[i]-'a']--;
    for (int i = 0; i < 26; i++)
    {
        if (lit[i] != 0)
            return false;
    }
    return true;
}

char cuv[128][256];
int nr,C;

int main()
{
    while(cin >> cuv[nr])
        nr++;
    for (int i = 0; i < nr - 1; i++)
    {
        if (anagrama(cuv[i],cuv[nr-1]))
            C++;
    }

    cout << C;

    return 0;

}
