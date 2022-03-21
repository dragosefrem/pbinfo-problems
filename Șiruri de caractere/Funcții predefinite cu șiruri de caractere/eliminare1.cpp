#include <iostream>
#include <cstring>

using namespace std;

void eliminare(char s[], int poz)
{
    int dim = strlen(s);
    for (int i = poz; i < dim; i++)
        s[i] = s[i+1];
}

int esteLitera(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}

char s[51];

int main()
{
    cin.getline(s,51);
    for (int i = strlen(s)-1; i >= 0; i--)
    {
        if (!esteLitera(s[i]))
            eliminare(s,i);
    }

    cout << s;

    return 0;

}
