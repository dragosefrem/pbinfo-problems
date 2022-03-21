void sub(int n, int& a, int& b)
{
   a = 0, b = 0;
   for (int i = n - 1; i>=1; i--)
   {
       int OK = 1;
       for (int d = 2; d*d<=i; d++)
       {
           if (i%d==0)
            {
                OK = 0;
                break;
            }
       }
       if (OK == 1)
       {
           a = i;
           break;
       }
   }
   for (int j = n + 1; b==0; j++)
   {
       int OK1 = 1;
       for (int d = 2; d*d<=j; d++)
       {
           if (j%d==0)
            {
                OK1 = 0;
                break;
            }
       }
       if (OK1 == 1)
       {
           b = j;
           break;
       }
   }
}