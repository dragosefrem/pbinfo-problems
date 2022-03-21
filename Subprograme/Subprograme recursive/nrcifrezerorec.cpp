unsigned short nr_cif_zero(unsigned n)
{
    if (n == 0)
        return 1;
    else if (n % 10 == 0)
        return 1 + nr_cif_zero(n / 10);
    else if (n / 10 > 0)
        return nr_cif_zero(n / 10);
    else
        return 0;
}