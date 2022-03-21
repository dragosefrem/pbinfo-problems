void nr_div_imp(int n, int& nr)
{
    nr = 0;
    for (int d = 1; d*d <= n; d++)
    {
        if (n%d == 0)
        {
            if (d%2 != 0)
                nr++;
            if (d!=n/d && n/d % 2 != 0)
                nr++;
        }
    }
}