// SUM FROM 1 TO N

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Printing Sum from 1 to " << n << endl;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}