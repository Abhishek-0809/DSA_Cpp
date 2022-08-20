// Complement of base 10 integer
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int m = n;
    int mask = 0;
    int ans;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    ans = (~n) & mask;

    // important case
    if (n == 0)
    {
        cout << "Complement of " << n << " is : 1";
    }
    else
    {
        cout << "Complement of " << n << " is : " << ans;
    }

    /*     // Another approach - not so accurate, test case failed: for i/p as 1.
        int n;
        cout << "Enter a number : ";
        cin >> n;

        int x = 1;
        while (x <= n)
        {
            n = n ^ x;
            x = x << 1;
        }

        if (n == 0)
        {
            cout << "Com : 1";
        }
        else
        {
            cout << "Complement is : " << n;
        }*/
}