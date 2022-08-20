// nCr = n! / r! * (n-r)!

#include <iostream>
using namespace std;

int factorial(int n) // factorial function
{
    int fact = 1;
    int i = 1;

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}

int nCr(int n, int r) // nCr function
{
    int numr = factorial(n);

    int denom = factorial(r) * factorial(n - r);

    return numr / denom;
}

int main() // main function
{
    int n, r;

    cout << "Enter value of n : ";
    cin >> n;

    cout << "Enter value of r : ";
    cin >> r;

    cout << "ANSWER IS : " << nCr(n, r) << endl;
}