void oglindit(int n, int& inv)
{
    inv = 0;
    while(n!=0)
    {
        inv = inv*10 + n%10;
        n/=10;
    }
}