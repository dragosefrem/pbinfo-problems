void interval(int n, int& a, int& b)
{
    int f1 = 1, f2 = 1;
    for (int i = 1; i <= n-1; i++)
    {
        f1 = f1 * i;
    }
    for (int j = 1; j<= n+1; j++)
    {
        f2 = f2*j;
    }
    a = f1 + 1;
    b = f2 - 1;
}