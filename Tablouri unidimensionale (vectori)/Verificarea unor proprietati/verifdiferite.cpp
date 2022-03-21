#include <iostream>

using namespace std;

int v[500],n, OK = 1;

int main()
{
    cin >> n;
    for (int i = 0 ; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j =  i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                OK = 0;
                break;
            }
        }
    }
    if (OK)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
