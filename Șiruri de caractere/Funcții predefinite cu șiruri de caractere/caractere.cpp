#include <iostream>
#include <cstring>

using namespace std;

char s1[251],s2[251];

int main()
{
    cin.getline(s1,251);
    cin.getline(s2,251);

    for (int i = 0; i < strlen(s1); i++)
    {
        if (strchr(s2,s1[i]))
            cout << s1[i];
    }

    return 0;

}
