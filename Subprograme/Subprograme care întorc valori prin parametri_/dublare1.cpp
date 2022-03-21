void dublare1(int& n)
{
    int aux = n, pc = 0, p = 1;
    while(aux!=0)
    {
        if (aux/10==0)
            pc = aux;
        p*=10;
        aux/=10;
    }
    n = pc * p + n;
}