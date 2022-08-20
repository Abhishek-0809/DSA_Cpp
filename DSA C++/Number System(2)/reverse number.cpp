// print numbers in reverse order
// 1234 -> 4321
// numbers can be reversed only in the range of 2^31 to 2^31 - 1 because we used int
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
        lastdigit = n % 10;
        ans = (ans * 10) + lastdigit;
        n = n / 10;
    }
    cout << ans;
}