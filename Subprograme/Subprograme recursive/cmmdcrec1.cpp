void cmmdc(int a, int b, int& r)
{
    if (a > b)
        cmmdc(a - b, b, r);
    else if (b > a)
        cmmdc(a, b - a, r);
     else
        r = a;
}