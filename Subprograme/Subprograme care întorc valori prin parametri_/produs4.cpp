void produs(int a, int& k)
{
    int p = 1;
    k = 1;
    for(int i = 1; i<=a; i+=2)
    {
        p = p*i;
        if (p<=a)
            k = i;
        else
            break;
    }
}