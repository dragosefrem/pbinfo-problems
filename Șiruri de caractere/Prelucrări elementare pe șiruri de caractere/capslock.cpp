#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main()
{
    char citire[256], afisare[256];
    fin.getline(citire,256);

    int nr = 0, capsLockActivat = 0, setat = 0;

    for (int i = 0; i < strlen(citire); i++)
    {
        if (citire[i] == '#' && setat == 0)
        {
            capsLockActivat = 1;
            setat = 1;
        }
        else if (citire[i] == '#' && setat == 1)
        {
            capsLockActivat = 0;
            setat = 0;
        }

        if (capsLockActivat == 1 && citire[i] != '#')
        {
            if (citire[i] >= 'a' && citire[i] <= 'z')
                citire[i] = citire[i] - 32;
            afisare[nr] = citire[i];
            nr++;

        }
        else if (capsLockActivat == 0 && citire[i] != '#')
        {
            afisare[nr] = citire[i];
            nr++;
        }
    }

    afisare[nr] = '\0';
    fout << afisare;

    return 0;
}
