#include <iostream>

using namespace std;

int n,x,OK;

int main()
{

    cin >> n;
    while (n > 0)
    {
        cin >> x;
        if (x % 2 == 1)
            OK = 1;
        n--;
    }
    if (OK)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
