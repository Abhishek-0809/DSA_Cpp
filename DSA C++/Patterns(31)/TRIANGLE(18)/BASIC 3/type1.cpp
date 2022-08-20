/*
1111
 222
  33
   4
 */

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter a number : ";
    cin >> n;

    // row
    while (i <= n)
    {
        // space printing
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        // col
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}