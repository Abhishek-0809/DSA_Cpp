// sum of even numbers till n
#include <iostream>
using namespace std;
int main()
{

    int n, i = 0, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of even numbers till " << n << " = " << sum << endl;
}
