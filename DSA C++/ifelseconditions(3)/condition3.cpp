#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character of your choice : " << endl;
    cin >> ch;

    if (islower(ch))
    {
        cout << "This is lowercase." << endl;
    }
    else if (isupper(ch))
    {
        cout << "This is uppercase." << endl;
    }
    else if (isdigit(ch))
    {
        cout << "This is numeric." << endl;
    }
}
