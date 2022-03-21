#include <iostream>

using namespace std;

int n,x,OK = 1;

int main()
{
    cin >> n;
    while (n > 0)
    {
        cin >> x;
        if (x % 2 == 1)
            OK = 0;
        n--;
    }
    if (OK)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
