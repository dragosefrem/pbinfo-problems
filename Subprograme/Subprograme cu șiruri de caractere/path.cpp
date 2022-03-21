#include <cstring>

int Path(const char cale[], char d[101][101])
{
    char aux[101];
    strcpy(aux,cale);
    char *p = strtok(aux,"\\");
    int nr = 0;
    while (p!=NULL)
    {
        strcpy(d[nr],p);
        nr++;
        p = strtok(NULL,"\\");
    }
    return nr;
}