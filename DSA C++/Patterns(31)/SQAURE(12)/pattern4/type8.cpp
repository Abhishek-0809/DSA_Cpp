// SAME AS type7
/*
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
 */

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    char ch = 'A';
    cout << "Enter a number : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
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