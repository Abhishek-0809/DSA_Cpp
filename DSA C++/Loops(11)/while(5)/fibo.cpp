// fibonacci series 0 1 1 2 3 5 8 13 21
// using while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int i = 1;

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    while (i <= n)
    {
        int Nextnum = a + b;
        a = b;
        b = Nextnum;
        i++;
        cout << Nextnum << " ";
    }
}