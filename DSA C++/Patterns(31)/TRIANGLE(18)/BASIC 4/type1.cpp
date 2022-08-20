/*
   1
  22
 333
4444

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
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // col
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }

        cout << endl;
        i++;
    }
}
