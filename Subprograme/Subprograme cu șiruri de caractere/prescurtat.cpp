void Prescurtat(char s[])
{
    char aux[101], *p = strtok(s, " ");
    int n = 0;
    while (p!=NULL)
    {
        n++;
        char aux1[25];
        strcpy(aux1,p);
        if (strchr(aux1,'.')!=NULL)
        {
            if (aux1[0] == 'C')
                strcpy(aux1,"COLEGIUL");
            else if (aux1[0] == 'L')
                strcpy(aux1, "LICEUL");
            else if (aux1[0] == 'N')
                strcpy(aux1, "NATIONAL");
            else if (aux1[0] == 'T')
                strcpy(aux1, "TEORETIC");
        }
        if (n == 1)
            strcpy(aux,aux1);
        else
        {
            strcat(aux, " ");
            strcat(aux,aux1);
        }
        p = strtok(NULL, " ");
    }
    strcpy(s,aux);
}
