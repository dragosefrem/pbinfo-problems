int extrageCuvant(char dest[], char s[], char sep[], int n)
{
    int nr = 0, setat = 0, inceputCuvant = -1, sfarsitCuvant = -1, succes = 0;

    int marimeS = 0,marimeSep = 0;
    for (int i = 0; s[i] != '\0'; i++)
        marimeS++;
    for (int i = 0; sep[i] != '\0'; i++)
        marimeSep++;

    for (int i = 0; i <= marimeS; i++)
    {
        int OK = 1;
        for (int j = 0; j <= marimeSep; j++)
            if (sep[j] == s[i]) OK = 0;
        if (OK == 1 && setat == 0)
        {
            inceputCuvant = i;
            setat = 1;
        }
        else if (OK == 0 && inceputCuvant != -1)
        {
            sfarsitCuvant = i - 1;
            setat = 0;
            if (nr == n)
            {
                succes = 1;
                break;
            }
            else
            {
                inceputCuvant = -1;
                sfarsitCuvant = -1;
                nr++;
            }
        }

    }

    if (succes == 1)
    {
        int x = 0;
        for (int k = inceputCuvant; k <= sfarsitCuvant; k++)
        {
            dest[x] = s[k];
            x++;
        }
        dest[x] = '\0';
        return 1;
    }
    else return 0;
}