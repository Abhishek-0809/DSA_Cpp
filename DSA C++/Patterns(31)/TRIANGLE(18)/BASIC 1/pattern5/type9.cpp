// SAME AS type10
/*

4
3 4
2 3 4
1 2 3 4

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
        int j = 1;
        while (j <= i)
        {
            cout << n + j - i;
            j++;
        }
        cout << endl;
        i++;
    }
}