// LEFT SHIFT, RIGHT SHIFT
#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 5;

    cout << "\nBITWISE OPERATORS" << endl;
    cout << "\nLEFT SHIFT, RIGHT SHIFT" << endl;

    /*
    not 100% accurate but left shift logic is multiply number by 2(no. of times the shift has to be done)
    eg. 3<<5 = 3*(2*2*2*2*2)=96
    */

    cout << "\nleft shift " << a << " by " << b << " bits = " << (a << b) << endl;

    /*      not 100% accurate but right shift logic is divide number by 2(no. of times the shift has to be done)
     */

    cout << "right shift " << a << " by " << b << " bits = " << (a >> b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;
}

/*
left shift, right shift for +ve numbers- padding with zero

left shift, right shift for -ve numbers- padding is compiler dependent(we don't know)

left shift for big numbers can result into -ve numbers

*/