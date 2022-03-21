#include <iostream>

using namespace std;

int v[10],n1;

int main()
{
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x,y,n2,OK = 1;
        cin >> n2;
        cin >> x;
        y = x;
        n2--;
        while (n2 > 0)
        {
            cin >> x;
            if (x - y < 0)
                OK = 0;
            y = x;
            n2--;
        }
        v[i] = OK;
    }
    for (int i = 0; i < n1; i++)
        cout << v[i] << ' ';
    return 0;
}
