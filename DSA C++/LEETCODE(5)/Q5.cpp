// power of 2
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // take input
    int n;
    cout << "Enter a number : ";
    cin >> n;

    /*     // brute force method 1
        int i = 1;
        int ans = 0;
        while (i <= 30)
        {
            ans = pow(2, i);
            if (ans == n)
            {
                cout << n << " is power of 2";
            }
            i++;
        } */

    // brute force method 2
    int i = 1;
    int ans = 1;
    while (i <= 30)
    {
        if (ans == n && ans != 1)
        {
            cout << n << " is power of 2";
        }

        // if (ans < INT32_MAX / 2)

        ans = ans * 2;

        i++;
    }
}