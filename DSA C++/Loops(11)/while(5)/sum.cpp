// sum of first n numbers
#include <iostream>
using namespace std;
int main()
{

    int n, i = 1, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum of first " << n << " natural numbers is : " << sum << endl;
}
