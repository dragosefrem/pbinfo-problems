void inserare(int& n)
{
    int nr = 0, p = 1, OK = 0;
    while(n>=10)
    {
        if (OK == 0)
        {
            nr = nr + p * ((n/10%10 * 10 + abs(n/10%10 - n%10))*10 + n%10);
            p*=1000;
        }
        else
        {
            nr = nr + p * (n/10%10 * 10 + abs(n/10%10 - n%10));
            p*=100;
        }
        OK = 1;
        n/=10;
    }
    n = nr;
}