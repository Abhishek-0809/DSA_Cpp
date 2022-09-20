// calculator using switch case

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    int op;
    cout << "Enter what you want to do with these numbers : " << endl;
    cout << "1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION" << endl;
    cin >> op;

    switch (op)
    {
    case 1:
        cout << a << " + " << b << " = " << a + b;
        break;

    case 2:
        cout << a << " - " << b << " = " << a - b;
        break;

    case 3:
        cout << a << " * " << b << " = " << a * b;
        break;

    case 4:
        cout << a << " / " << b << " = " << a / b;
        break;

    default:
        cout << "Invalid operation" << endl;
    }
}