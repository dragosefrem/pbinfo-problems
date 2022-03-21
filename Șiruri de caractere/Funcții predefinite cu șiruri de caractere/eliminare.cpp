#include <iostream>
#include <cstring>

using namespace std;

char s[101];

int main()
{

    cin >> s;

    int dim = strlen(s);

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (j != i)
                cout << s[j];
        }
        cout << '\n';
    }

    return 0;

}
