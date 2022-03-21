#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("permutarecuvant.in");
ofstream fout("permutarecuvant.out");

int main()
{
    char cuv[21];
    fin >> cuv;
    int dim = strlen(cuv), check = 0;
    for (int i = 0; i < dim; i++)
    {
        for (int j = i; j < dim; j++)
        {
            if (check && j == i)
            {
                check = 0;
                break;
            }
            fout << cuv[j];
            if (j == dim-1)
            {
                j = -1;
                check = 1;
            }
        }
        fout << " " ;
    }
    
    return 0;

}
