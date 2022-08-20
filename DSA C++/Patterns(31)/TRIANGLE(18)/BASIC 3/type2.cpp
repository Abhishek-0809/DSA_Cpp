/*
1234
 234
  34
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

        // space
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
            cout << j + i - 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
