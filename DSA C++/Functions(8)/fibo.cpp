// nth term of fibo series 0 1 1 2 3 5 8 13.... eg n=5 then o/p is 3
#include <iostream>
using namespace std;

int fibo(int n)
{
    int a = 0, b = 1;

    int i = 1, ans = 0, NextNum = 0;
    while (i <= n)
    {
        NextNum = a + b;
        // cout << "answer is " << NextNum << endl;
        a = b;
        b = NextNum;
        i++;
    }
    return NextNum;
}

int main()
{

    int n;
    cout << "Enter which term you want to know : ";
    cin >> n;
    cout << n << "th term of fibonacci series is : " << fibo(n);
}