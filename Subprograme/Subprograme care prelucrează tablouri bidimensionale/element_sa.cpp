int nr_sa(int a[][100], int n, int m)
{
    int minimLinie[100] = {0}, maximColoana[100] = {0}, maximLinie[100] = {0}, minimColoana[100] = {0};
    for (int i = 0; i < n; i++)
    {
        minimLinie[i] = maximLinie[i] = a[i][0];
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] < minimLinie[i]) minimLinie[i] = a[i][j];
            if (a[i][j] > maximLinie[i]) maximLinie[i] = a[i][j];
        }

    }

    for (int j = 0; j < m; j++)
    {
        maximColoana[j] = minimColoana[j] = a[0][j];
        for (int i = 1; i < n; i++)
        {
            if (a[i][j] > maximColoana[j]) maximColoana[j] = a[i][j];
            if (a[i][j] < minimColoana[j]) minimColoana[j] = a[i][j];
        }
    }

    int nr = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (minimLinie[i] == maximColoana[j] || maximLinie[i] == minimColoana[j])
                nr++;
    }


    return nr;
}