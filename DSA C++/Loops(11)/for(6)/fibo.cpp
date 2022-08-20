// fibonacci series
// using for loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int Nextnum = a + b;
        a = b;
        b = Nextnum;
        cout << Nextnum << " ";
    }
}