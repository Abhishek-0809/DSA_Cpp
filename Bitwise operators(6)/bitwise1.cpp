// AND, OR, NOT, XOR
#include <iostream>
using namespace std;
int main()
{
     int a = 4;
     int b = 6;

     cout << "\nBITWISE OPERATORS" << endl;
     cout << "\nAND, OR, NOT, XOR:\n"
          << endl;

     // AND- one false all false
     cout << "a&b is " << (a & b) << endl;

     // OR- one true all true
     cout << "a|b is " << (a | b) << endl;

     // NOT- [TT-invert] (2's complement method)
     cout << "~a is " << (~a) << endl;

     // XOR- both same false
     cout << "a^b is " << (a ^ b) << "\n"
          << endl;
}