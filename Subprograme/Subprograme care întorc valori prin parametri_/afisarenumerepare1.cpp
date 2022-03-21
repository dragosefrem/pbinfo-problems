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
        if (i%2 == 0)
            cout << i << " ";
    }
}