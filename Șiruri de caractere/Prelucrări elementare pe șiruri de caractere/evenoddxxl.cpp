#include <fstream>
#include <cstring>

using namespace std;

int charParitate(char s[])
{
    int n = s[strlen(s)-1] - '0';
    if (n%2 == 0)
        return 1;
    else
        return 0;
}

ifstream fin("evenoddxxl.in");
ofstream fout("evenoddxxl.out");

int main()
{
    char s[1001];
    fin >> s;
    if (charParitate(s))
        fout << "Par";
    else
        fout << "Impar";

    return 0;
}
