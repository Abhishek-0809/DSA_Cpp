/*
Q1----number - 234
find sum, product, sum-product?
2 + 3 + 4 = 9
2 * 3 * 4 = 24
 */

#include <iostream>
using namespace std;
int main()
{
    int n, digit;
    int sum = 0, prod = 1;
    cout << "Enter a number : ";
    cin >> n;
    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        prod = prod * digit;
        n = n / 10;
    }
    cout << "SUM = " << sum << "\nPRODUCT = " << prod;
    int answer = prod - sum;
    cout << "\nFinal Answer is : sum - prod = " << answer;
}