// continue
// after using "continue" keyword- uske baad ka bina kuch execute hue directly loop restart hoga

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        cout << "HI" << endl;
        cout << "HEY" << endl;
        cout << "HELLO\n"
             << endl;

        continue;

        cout << "REPLY ME" << endl;
        cout << "REPLY TOH KARDO" << endl;
    }
}