#include <iostream>

using namespace std;

int n,x,OK;

int main()
{

    cin >> n;
    while (n > 0)
    {
        cin >> x;
        int OK1 = 1;
        for (int i = 2; i*i <= x; i++)
        {
            if (x % i == 0)
            {
                OK1 = 0;
                break;
            }
        }
        if (OK1 == 1 && x > 1)
            OK = 1;
        n--;
    }
    if (OK)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
