void afisare(int a, int b)
{
    if (a>b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    for (int i = a; i<=b; i++)
    {
        int OK = 1;
        for (int d = 2; d*d <= i; d++)
            if (i%d==0)
                OK = 0;
        if (OK == 1)
            cout << i << " ";
    }
}