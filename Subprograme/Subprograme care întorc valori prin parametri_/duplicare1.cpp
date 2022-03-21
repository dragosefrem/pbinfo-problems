void duplicare(int n, int& d)
{
    int p = 1, OK = 0;
    d = 0;
    while(n!=0)
    {
        if (n%10%2==0)
        {
            OK = 1;
            d = d + p * (n%10*10+n%10);
            p*=100;
            n/=10;
        }
        else
        {
            d = d + p * (n%10);
            p*=10;
            n/=10;
        }
    }
    if (OK == 0)
        d = -1;
}