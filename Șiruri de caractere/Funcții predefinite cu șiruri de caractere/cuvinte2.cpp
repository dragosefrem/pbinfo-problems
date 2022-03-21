#include <iostream>
#include <cstring>

using namespace std;

int palindrom(char s[])
{
    int i = 0, j = strlen(s)-1;
    while (i < j)
    {
        if (s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

char s[256], cuv[11], *p;
int nr;

int main()
{
    cin.getline(s,256);
    p = strtok(s, " ,.");
    while (p != NULL)
    {
        if (palindrom(p))
        {
            if (nr == 0)
                strcpy(cuv,p);
            else
                if (strcmp(p,cuv)<0)
                    strcpy(cuv,p);
            nr++;
        }
        p = strtok(NULL, " ,.");
    }

    if (nr > 0)
        cout << cuv;
    else
        cout << "IMPOSIBIL";

    return 0;

}
