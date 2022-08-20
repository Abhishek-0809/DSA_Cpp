// prime or not
#include <iostream>
using namespace std;
int main()
{

    int n, i = 2;
    cout << "Enter a number : ";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0) // divide hogya, matlab not prime
        {
            cout << "Is not Prime for " << i << endl;
        }
        else
        {
            cout << "Is Prime for " << i << endl;
        }
        i++;
    }
}
