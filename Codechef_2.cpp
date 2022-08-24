// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a > b && a < c) || (a > c && a < b))
        {
            cout << a << "\n";
        }
        else if ((b > a && b < c) || (b > c && b < a))
        {
            cout << b << "\n";
        }
        else if ((c > a && c < b) || (c > b && c < a))
        {
            cout << c << "\n";
        }
    }

    return 0;
}