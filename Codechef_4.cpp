// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        cout << (int)s[0] - 48 + (int)s[s.size() - 1] - 48 << "\n";
    }
    
    return 0;
}