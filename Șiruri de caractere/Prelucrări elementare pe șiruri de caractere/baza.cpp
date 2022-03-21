#include <fstream>
#include <cstring>

using namespace std;

struct numar
{
    char continut[101];
    short int nrCifre;

}nr,pow;

void addToNumber(numar&, short int);
void afisareNumber(numar);
void addNumbers(numar&, numar);
void multiplyNumbers(numar&, short int);
void power(short int, short int, numar&);

char cuv[51];

ifstream fin("baza.in");
ofstream fout("baza.out");

int main()
{
    fin >> cuv;
    short int dim = strlen(cuv);
    for (short int i = dim-1; i >= 0; i--)
    {
        power(26,dim-i-1,pow);
        multiplyNumbers(pow,cuv[i]-'a');
        addNumbers(nr,pow);
    }

    afisareNumber(nr);

    return 0;
}

void addToNumber(numar& nr, short int x)
{
    nr.nrCifre++;
    nr.continut[101-nr.nrCifre] = '0' + x;
}

void afisareNumber(numar nr)
{
    for (short int i = 101 - nr.nrCifre; i <= 100; i++)
        fout << nr.continut[i];
}

void addNumbers(numar& nr, numar nr1)
{
    short int carry = 0;
    for (short int i = 0; i < nr1.nrCifre || carry; i++)
    {
        short int k = 100 - i;
        if (!nr.continut[k])
        {
            nr.continut[k] = '0';
            nr.nrCifre++;
        }
        if (!nr1.continut[k])
            nr1.continut[k] = '0';
        short int sum = (nr.continut[k]-'0') + (nr1.continut[k]-'0') + carry;
        carry = 0;
        if (sum > 9)
        {
            carry = sum/10;
            nr.continut[k] = '0' + (sum - 10);
        }
        else
            nr.continut[k] = '0' + sum;

    }
}

void multiplyNumbers(numar& nr, short int n)
{
    numar multiplier = {};
    if (n == 0)
    {
        addToNumber(multiplier,0);
        nr = multiplier;
    }
    else
        multiplier = nr;
    short int aux = n;
    for (short int i = 1; i <= aux-1; i++)
        addNumbers(nr,multiplier);
}

void power(short int n, short int putere, numar& nr)
{
    short int aux_ = n;
    numar aux = {};
    if (putere == 0)
    {
        addToNumber(aux,1);
        nr = aux;
        aux_ = 0;
    }

    while (aux_ > 0)
    {
        addToNumber(aux,aux_%10);
        aux_/=10;
    }

    nr = aux;

    for (short int i = 1; i <= putere-1; i++)
        multiplyNumbers(nr,n);
}
