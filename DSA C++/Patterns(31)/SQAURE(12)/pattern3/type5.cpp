// SAME AS type6
/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
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
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
