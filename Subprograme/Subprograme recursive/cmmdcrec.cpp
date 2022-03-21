unsigned cmmdc(unsigned x, unsigned y)
{
    if (x > y)
        return cmmdc(x - y, y);
    else if (y > x)
        return cmmdc(x, y - x);
     else
        return x;
}