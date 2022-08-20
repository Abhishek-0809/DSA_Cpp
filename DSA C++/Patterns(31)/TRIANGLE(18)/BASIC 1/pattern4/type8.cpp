// SAME AS type7
/*
A
B A
C B A
D C B A
E D C B A
F E D C B A

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
        char ch = 'A' + i - j;
        while (j <= i)
        {
            cout << ch << " ";
            ch--;
            j++;
        }
        cout << endl;
        i++;
    }
}