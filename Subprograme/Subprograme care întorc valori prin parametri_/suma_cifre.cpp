void sumcif(int n, int& s2, int& s1)
{
    s1 = 0; s2 = 0;
    while (n!=0)
    {
        if (n%2==0)
            s2+=n%10;
        else
            s1+=n%10;
        n/=10;
    }
}