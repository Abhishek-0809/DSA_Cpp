// EVEN OR ODD USING FUNCTIONS

#include <iostream>
using namespace std;

bool isEven() // function
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    // 1-> even
    // 0-> odd
    if (num & 1)
    {
        return 0; // number is odd
    }

    return 1; // number is even
}

int main()
{
    if (isEven())
    {
        cout << "IT IS AN EVEN NUMBER" << endl;
    }
    else
    {
        cout << "IT IS AN ODD NUMBER" << endl;
    }
}