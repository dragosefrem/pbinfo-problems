#include <fstream>
#include <cstring>

using namespace std;

char s[200001],temp[100001];

ifstream fin("minlex.in");
ofstream fout("minlex.out");

int main()
{

    fin >> s;
    int n = strlen(s), k = 0;
    strcpy(temp,s);
    strcat(s,temp);
    for (int i = 1; i < n; i++)
    {
        if (strncmp(s+i,temp,n) < 0)
        {
            strncpy(temp,s+i,n);
            k = i;
        }
    }

    fout << k;
    return 0;
}
