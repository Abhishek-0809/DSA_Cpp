// SAME AS type8
/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
   */

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, count = 1;
    cout << "Enter a number : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}