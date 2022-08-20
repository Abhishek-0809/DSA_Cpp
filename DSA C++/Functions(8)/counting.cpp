// print numbers till n
#include <iostream>
using namespace std;

// Function signature
void printCounting(int n)
{
    // Function body
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    // Function declaration i.e calling the function
    printCounting(n);
}