#include <iostream>

using namespace std;

int n,x,v,OK = 1;

int main()
{
    cin >> n;
    cin >> x;
    v = x;
    n--;
    while (n > 0)
    {
        cin >> x;
        if (x != v)
            OK = 0;
        n--;
    }
    if (OK)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
