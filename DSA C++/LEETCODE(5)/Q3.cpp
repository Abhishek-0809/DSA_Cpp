// print numbers in reverse order
// 1234 -> 4321
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = 0;
    int lastdigit;
    while (n != 0)
    {
        if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
        {
            cout << "                  0                 "; // not accurate, use return 0
        }
        lastdigit = n % 10;
        ans = (ans * 10) + lastdigit;
        n = n / 10;
    }
    cout << ans;
}