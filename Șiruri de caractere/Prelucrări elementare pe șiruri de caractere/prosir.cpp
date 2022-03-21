#include <fstream>

using namespace std;

ifstream fin("prosir.in");
ofstream fout("prosir.out");

int main()
{
    char s[201];
    fin.getline(s,201);
    for (int i = 0; s[i]!='.'; i++)
    {
        if ((s[i+1] == ' ' || s[i+1] == '.') && s[i] != ' ')
            s[i] = '5';
    }
    fout << s;
    return 0;
}
