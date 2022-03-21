#include <iostream>
#include <cstring>

using namespace std;

void invers(char s[])
{
    int i = 0, j = strlen(s)-1;
    while (i < j)
    {
        char aux = s[i];
        s[i] = s[j];
        s[j] = aux;
        i++;
        j--;
    }
}

char s[256],*p;

int main()
{
    cin.getline(s,256);
    p = strtok(s, " ");

    while (p != NULL)
    {
        cout << p << " ";
        invers(p);
        cout << p << " ";
        p = strtok(NULL, " ");
    }

    return 0;

}
