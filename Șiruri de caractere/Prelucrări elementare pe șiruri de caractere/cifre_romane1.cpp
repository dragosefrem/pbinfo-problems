#include <fstream>
#include <cstring>

using namespace std;

char numerale[]="IVXLCDM";

int arabic(char c)
{
    switch(c)
    {
        case 'M':
            return 1000;
        case 'D':
            return 500;
        case 'C':
            return 100;
        case 'L':
            return 50;
        case 'X':
            return 10;
        case 'V':
            return 5;
        case 'I':
            return 1;
        default:
            return -1;
    }
}

int notatieSubstractiva(char s[])
{
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        if (arabic(s[i]) < arabic(s[i+1]))
        {
            if (!strchr("IXC",s[i]))
                return 0;
            else
            {
                if (s[i] == 'I' && (s[i+1] != 'V' && s[i+1] != 'X'))
                    return 0;
                if (s[i] == 'X' && (s[i+1] != 'L' && s[i+1] != 'C'))
                    return 0;
                if (s[i] == 'C' && (s[i+1] != 'D' && s[i+1] != 'M'))
                    return 0;
            }

            if (arabic(s[i]) <= arabic(s[i+2]))
                return 0;

            if (s[i] == s[i-1])
                return 0;
        }
    }
    return 1;
}

int repetitieNumerale(char s[])
{
    for (int i = 0; i < strlen(numerale);i++)
    {
        int nr = 0;
        char *p = strchr(s,numerale[i]);
        if (strchr("IXCM",numerale[i]))
        {
                while (p != NULL)
                {
                    if (arabic(s[(p-s)])<=arabic(s[(p-s)-1]) || (p-s) == 0)
                        nr++;
                    p = strchr(p+1,numerale[i]);
                }
        }
        else
            {
                while (p!=NULL)
                {
                    nr++;
                    p = strchr(p+1,numerale[i]);
                }

            }

        if (strchr("IXCM",numerale[i]) && nr > 3)
            return 0;
        else if (strchr("VLD",numerale[i]) && nr > 1)
            return 0;
    }
    return 1;
}

int romanToArabic(char s[])
{
    int check1 = repetitieNumerale(s);
    int check2 = notatieSubstractiva(s);
    short int n;
    if (check1 == 1 && check2 == 1)
    {
        n = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (arabic(s[i]) == -1)
                return -1;
            if (arabic(s[i])<arabic(s[i+1]))
            {
                n = n + (arabic(s[i+1])-arabic(s[i]));
                i++;
            }
            else
                n+=arabic(s[i]);
        }
    }
    else
        n = -1;

    return n;
}


char s[20];

ifstream fin("cifre_romane1.in");
ofstream fout("cifre_romane1.out");

int main()
{
    fin >> s;
    int n = romanToArabic(s);

    if (n == -1)
        fout << "Numar invalid";
    else
        fout << n;

    return 0;
}
