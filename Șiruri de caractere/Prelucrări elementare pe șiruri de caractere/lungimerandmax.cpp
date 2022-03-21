#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("lungimerandmax.in");
ofstream fout("lungimerandmax.out");

int main()
{
    char s[10001];
    int l,k,OK = 1,i = 0;
    fin >> l; fin.get();
    fin.getline(s,10001);
    char *p = strtok(s," ");
    k = l;
    while(p != NULL)
    {
       if (strlen(p) + i <= k)
       {
           if (OK == 1)
            {
                fout << p;
                k-=(strlen(p)+i);
                i = 1;
                OK = 0;
            }
            else
            {
                fout << " " << p;
                k -= (strlen(p)+i);
            }
        }
       else
       {
           fout << '\n';
           k = l;
           i = 0;
           OK = 1;
       }
       if (OK == 0)
            p = strtok(NULL, " ");
    }

    return 0;
}
