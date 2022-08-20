// total number of set bits in a and b eg a=5 = 101 and b=2= 010 then ans is total 3 set bits

#include <iostream>
using namespace std;

int Setbit(int a, int b)
{
    int count_a = 0, count_b = 0;
    int total = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            count_a++;
        }
        a = a >> 1;
    }

    while (b != 0)
    {
        if (b & 1)
        {
            count_b++;
        }
        b = b >> 1;
    }

    total = count_a + count_b;
    return total;
}
int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    cout << "total number of set bits in " << a << " and " << b << " is : " << Setbit(a, b);
}