void factorial(int n, int& f)
{
  if (n > 0)
  {
      factorial(n - 1, f);
      f = f * n;
  }
  else
  	f = 1;
}