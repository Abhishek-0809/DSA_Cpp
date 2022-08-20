// Prime or not
#include <iostream>
using namespace std;

// 1-> PRIME
// 0 -> NOT PRIME
bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) // divide hogya, not prime
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "Number is Prime " << endl;
    }
    else
    {
        cout << "Number is Not Prime " << endl;
    }
    return 0;
}