/*
   1
  121
 12321
1234321

 */

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter a number : ";
    cin >> n;
    while (i <= n)
    {
        // space print karo(triangle 1)
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // triangle 2
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // triangle 3
        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        i++;
    }
}