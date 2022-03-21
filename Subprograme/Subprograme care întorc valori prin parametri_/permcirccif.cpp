void perm(int& n)
{
    int n1 = 0, p = 1;
    while(n>=10)
    {
        n1 = n1 + p * (n%10);
        n/=10;
        p*=10;
    }
    n1 = n1 * 10 + n;
    n = n1;
}