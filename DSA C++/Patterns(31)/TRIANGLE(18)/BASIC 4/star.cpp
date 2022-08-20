/*
   *
  **
 ***
****

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
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // star print karlo
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
