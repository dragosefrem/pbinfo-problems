void prefix(int n, int k, int& x)
{
    int aux, nr = 0, nr1 = 0;
    aux = n;
    while(aux!=0)
    {
        aux/=10;
        nr++;
    }
    while(nr1<nr-k)
    {
        n/=10;
        nr1++;
    }
    x = n;
}