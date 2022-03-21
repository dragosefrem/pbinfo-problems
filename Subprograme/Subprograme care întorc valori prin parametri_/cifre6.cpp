void numar(int n, int k, int& x)
{
    x = 0;
    for (int i = 1; i<=k; i++)
    {
        int aux = n, maxim = 0;
        while (aux!=0)
        {
            if (aux%10>maxim)
                maxim = aux%10;
            aux/=10;
        }
        x = x*10 + maxim;
        int nr = 0, p =1;
        while (n%10!=maxim)
        {
            nr = nr + p * (n%10);
            n/=10;
            p*=10;
        }
        n = n/10 * p + nr;
    }
}