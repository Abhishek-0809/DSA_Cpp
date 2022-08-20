// SAME AS type1
/*
A
B B
C C C
D D D D
E E E E E
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
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
}