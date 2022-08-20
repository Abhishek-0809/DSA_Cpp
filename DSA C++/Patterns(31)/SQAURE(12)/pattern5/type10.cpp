// SAME AS type9
/*
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
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
        char ch = 'A' + i + j - 2;
        while (j <= n)

        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}