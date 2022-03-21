#include <iostream>

using namespace std;

int n,x,y = -1,OK = 1;

int main()
{
    cin >> n;
    while (n > 0)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            if (y == -1)
                y = x;
            else
            {
                if (x - y < 0)
                    OK = 0;
                y = x;
            }
        }
        n--;
    }

    if (OK)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
