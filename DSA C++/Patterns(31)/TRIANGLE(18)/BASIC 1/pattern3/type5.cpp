// SAME AS type6
/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 10 11
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
        int j = 1, count = i;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}