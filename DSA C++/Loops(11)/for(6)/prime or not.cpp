// Prime or not
// break, bool

#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isPrime = 1;
    cout << "Enter the value of n" << endl;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "IS NOT A PRIME NUMBER" << endl;
    }
    else
    {
        cout << "IS A PRIME NUMBER " << endl;
    }
}