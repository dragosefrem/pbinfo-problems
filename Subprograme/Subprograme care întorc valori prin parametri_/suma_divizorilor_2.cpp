void sum_div(int n, int& s)
{
    s = 0;
    for (int d = 1; d * d <= n; d++)
    {
        if (n%d == 0)
        {
            s += d;
            if (d != n/d)
                s += n/d;
        }
    }
}