void cnt_cif(int n, int k, int& c)
{
    if (n > 9)
    	cnt_cif(n / 10, k, c);
    else if (n <= 9)
        c = 0;
    if (n % 10 >= k)
        c++;
    
}