// decimal to binary
// 15 to 1111
//////ERRORR
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*     int n;
        cout << "Enter a number : ";
        cin >> n;

        int i = 0;
        int ans = 0;

             while (n != 0)
            {
                int bit = n & 1;
                ans = (bit * pow(10, i)) + ans;
                n = n >> 1;
                i++;
            }
            cout << "Binary representation is : " << ans;   */

    int n = 5;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n & 1;
        ans = (digit * pow(10, i) + ans);

        n = n >> 1;
        i++;
    }
    cout << ans << endl;
}