// Same as type3
/*
A
B C
D E F
G H I J
K L M N O
 */

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    char count = 'A';
    cout << "Enter a number : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
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
