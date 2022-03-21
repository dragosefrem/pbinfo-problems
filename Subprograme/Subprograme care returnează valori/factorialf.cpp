unsigned int fact(short int n)
{
	unsigned int s = 1;
    for (short int i = 2; i <= n; i++)
    	s*=i;
    return s;
}