#include <iostream>
using namespace std;

int main()

{

    int x = 5;

    if (x++ == 5)

        cout << "Five" << endl;

    else

        if (++x == 6)

        cout << "Six" << endl;

    return 0;
}