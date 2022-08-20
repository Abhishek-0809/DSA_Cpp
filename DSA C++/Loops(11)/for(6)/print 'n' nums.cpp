// basic understanding of for loop
// print n numbers

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Printing count from 1 to " << n << endl;

    /*     // FOR METHOD 1
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        } */

    /*     // FOR METHOD 2
        int i = 1;
        for (;;)
        {
            if (i <= n)
            {
                cout << i << " ";
            }
            else
            {
                break;
            }
            i++;
        } */

    // FOR METHOD 3(o/p not related to 1,2)
    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    {
        cout << a << " " << b << " " << c << " " << endl;
    }
}