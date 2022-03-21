#include <fstream>
#include <cstring>

using namespace std;

char s[257],response[8];
short int n;

int esteLitera(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int esteMajuscula(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

ifstream fin("caesar.in");
ofstream fout("dbftbs.out");

int main()
{
    fin.getline(s,256);
    fin >> n;
    fin >> response;

    if (strcmp(response,"encrypt")==0)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (esteLitera(s[i]))
            {
                if (esteMajuscula(s[i]))
                {
                    int k = 0;
                    char j;
                    if (s[i] + 1 > 'Z')
                        j = 'A';
                    else
                        j = s[i]+1;
                    for (; j <= 'Z'; j++)
                    {
                        k++;
                        if (k == n)
                        {
                            s[i] = j;
                            break;
                        }
                        if (j == 'Z')
                            j = 'A' - 1;
                    }
                }
                else
                {
                    int k = 0;
                    char j;
                    if (s[i] + 1 > 'z')
                        j = 'a';
                    else
                        j = s[i]+1;
                    for (; j <= 'z'; j++)
                    {
                        k++;
                        if (k == n)
                        {
                            s[i] = j;
                            break;
                        }
                        if (j == 'z')
                            j = 'a' - 1;
                    }
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (esteLitera(s[i]))
            {
                if (esteMajuscula(s[i]))
                {
                    int k = 0;
                    char j;
                    if (s[i] - 1 < 'A')
                        j = 'Z';
                    else
                        j = s[i] - 1;
                    for (; j >= 'A'; j--)
                    {
                        k++;
                        if (k == n)
                        {
                            s[i] = j;
                            break;
                        }
                        if (j == 'A')
                            j = 'Z' + 1;
                    }
                }
                else
                {
                    int k = 0;
                    char j;
                    if (s[i] - 1 < 'a')
                        j = 'z';
                    else
                        j = s[i] - 1;
                    for (; j >= 'a'; j--)
                    {
                        k++;
                        if (k == n)
                        {
                            s[i] = j;
                            break;
                        }
                        if (j == 'a')
                            j = 'z' + 1;
                    }
                }
            }
        }
    }

    fout << s;


    return 0;
}
