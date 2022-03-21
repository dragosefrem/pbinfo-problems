void P(int& n, int c)
{
    int nr = 0, p = 1;
    while (n!=0)
    {
        if (n%10!=c)
        {
            nr = nr + p * (n%10);
            p*=10;
        }
        n/=10;
    }
    n = nr;
}