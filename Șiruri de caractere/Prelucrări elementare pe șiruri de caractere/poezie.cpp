#include <iostream>
#include <cstring>

using namespace std;

void eliminaCaracter(char s[], int k)
{
    for (int i = k; i < strlen(s); i++)
        s[i] = s[i+1];
}

int main()
{
    char versuri[15][256];
    int k;
    cin >> k; cin.get();
    for (int i = 0; i < k; i++)
    {
        cin.getline(versuri[i],256);
        for (int j = 0; j < strlen(versuri[i]) - 1; j++)
        {
            if (strchr(".,!?",versuri[i][j])!=NULL)
            {
                eliminaCaracter(versuri[i],j);
                j--;
            }
        }
    }

    for (int i = 0; i < k; i++)
        cout << versuri[i] << '\n';

    return 0;
}
