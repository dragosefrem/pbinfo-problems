void Impare(int& n)
{
    int aux = 0, p = 1;
    while(n!=0)
    {
        if (n%10%2!=0)
            aux = aux + (n%10-1) * p;
        else
            aux = aux + n%10 * p;
        p*=10;
        n/=10;
    }
    n = aux;
}
