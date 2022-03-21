#include <fstream>
#include <cstring>

using namespace std;

char prop[256],propmax[256];
short int n;

ifstream fin("lgmax.in");
ofstream fout("lgmax.out");

int main()
{

    fin >> n; fin.get();

    for (int i = 0; i < n; i++)
    {
        fin.getline(prop,256);
        if (strlen(prop) > strlen(propmax))
            strcpy(propmax,prop);
    }

    fout << propmax;

    return 0;

}
