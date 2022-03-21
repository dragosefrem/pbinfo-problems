void sumcif(int n, int& s)
{
    if (n > 0)
    {
        sumcif(n/10,s);
        s = s + n % 10;
    }
    else
        s = 0;
}