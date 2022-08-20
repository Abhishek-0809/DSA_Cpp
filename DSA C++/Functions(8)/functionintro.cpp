// power of any number
#include <iostream>
using namespace std;

int power()
{
    int num1, num2;
    cout << "Enter numbers to find power :" << endl;
    cin >> num1 >> num2;

    // initialize
    int i = 1;
    int ans = 1;

    // while loop for getting power
    while (i <= num2)
    {
        ans = ans * num1;
        i++;
    }

    return ans;
}

int main()
{
    // find powers for 5 different inputs
    cout << "Answer is " << power() << endl;
    cout << "Answer is " << power() << endl;
    cout << "Answer is " << power() << endl;
    cout << "Answer is " << power() << endl;
    cout << "Answer is " << power() << endl;
}