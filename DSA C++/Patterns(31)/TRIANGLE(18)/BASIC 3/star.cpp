/*

****
 ***
  **
   *

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
        // space print karlo
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        // star print karlo
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
