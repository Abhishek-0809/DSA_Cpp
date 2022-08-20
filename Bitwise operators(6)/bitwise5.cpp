// INCREMENT, DECREMENT MCQ-2
#include <iostream>
using namespace std;
int main()
{

    int a = 1, b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout << "STAGE1" << endl;
    }

    else
    {
        cout << "STAGE2" << endl;
    }
    cout << a << " " << b << endl;
}