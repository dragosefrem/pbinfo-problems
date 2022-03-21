#include <cstring>

void Alphanum(char s[], char cuv[][21], int &n, int num[], int &m)
{
    char *p = strtok(s, " ");
    n = 0; m = 0;
    while (p!=NULL)
    {
        if (strchr("0123456789",*p)==NULL)
        {
            strcpy(cuv[n],p);
            n++;
        }
        else
        {
            int x = 0, pr = 1;
            for (int i = strlen(p) - 1; i >= 0; i--)
            {
                x = x + pr * (*(p+i)-'0');
                pr*=10;
            }
            num[m] = x;
            m++;
        }
        p = strtok(NULL, " ");

    }
}