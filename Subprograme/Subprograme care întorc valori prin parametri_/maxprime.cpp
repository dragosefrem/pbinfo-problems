void sub(int n, int& a, int& b)
{
   int nr = 0;
   for (int i = n-1; i >= 1; i--)
   {
       int OK = 1;
       for (int d = 2; d*d<=i; d++)
       {
           if(i%d==0)
            {
                OK = 0;
                break;
            }
       }
       if (OK == 1)
       {
           if (nr==0)
            a=i;
           else if (nr==1)
            {
                b = i;
                break;
            }
            nr++;
       }
   }
}