void detcifre(int n, int& pc, int& uc)
{
    uc = n%10;
    pc = 0;
    while (n!=0)
    {
        if (n/10 == 0)
            pc = n;
        n/=10;
    }
}