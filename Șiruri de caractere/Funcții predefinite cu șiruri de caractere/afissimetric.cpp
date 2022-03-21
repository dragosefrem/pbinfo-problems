#include <iostream>
#include <cstring>

using namespace std;

struct propozitie
{
    char cuvinte[501][1001];
}prop[10];

short int n, nrMax;

int main()
{
    cin >> n; cin.get();

    for (int i = 0; i < n; i++)
    {
        short int nr = 0;
        while (cin.peek() != '\n' && cin >> prop[i].cuvinte[nr])
            nr++;
        if (nr > nrMax)
            nrMax = nr;
        cin.get();
    }

    for (int i = 0; i < nrMax; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (strlen(prop[j].cuvinte[i]))
                cout << prop[j].cuvinte[i] << " ";
        }
    }


    return 0;

}
