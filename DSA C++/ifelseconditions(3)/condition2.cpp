#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter value of a and b : ";
    cin >> a >> b;

    /*     a = cin.get();
        b = cin.get(); */

    /* cin does not read 'space','enter','tab' but if we want it to be read then we can use cin.get()
    ASCII value -> refer ASCII table for values of other characters
    A = 65 , Z = 90
    a = 97 , z = 122
    space = 32 , enter = 10 , tab = 9 */

    cout << "Value of a is : " << a << "\nValue of b is : " << b << endl;
    if (a > b)
    {
        cout << "Value of a is greater than b" << endl;
    }
    else
    {
        cout << "Value of b is greater than a" << endl;
    }
}
