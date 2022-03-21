void perfect(int a, int b)
{
    int OK = 0;
    for (int i = b; i>=a; i--)
    {
        int s = 0;
        for (int d = 1; d*d <= i; d++)
        {
            if (i%d == 0)
            {
                if (i != d)
                    s+=d;
                if (d > 1)
                    s+=i/d;
            }
        }
        if (s == i && i > 0)
        {
            OK = 1;
            cout << i << " ";
        }
    }
    if (OK == 0)
        cout << "nu exista";
}