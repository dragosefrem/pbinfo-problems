unsigned short sumcif(unsigned n)
{
    if (n > 0)
        return n % 10 + sumcif(n/10);
    else
        return 0;
}