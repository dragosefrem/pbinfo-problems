void duplicare(int& n)
{
    int nr = 0, p = 1;
    while(n!=0)
    {
        if (n%10%2==0)
        {
            nr = nr + p * (n%10*10+n%10/2);
            p*=100;
            n/=10;
        }
        else
        {
            nr = nr + p*(n%10);
            p*=10;
            n/=10;
        }
    }
    n = nr;
}