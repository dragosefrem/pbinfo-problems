void cifminmax(int n, int& cmax, int& cmin)
{
    cmax = 0; cmin = 9;
    if(n==0)
        cmin = 0;
    while (n!=0)
    {
        if (n%10 > cmax)
            cmax = n%10;
        if (n%10 < cmin)
            cmin = n%10;
        n/=10;
    }
}