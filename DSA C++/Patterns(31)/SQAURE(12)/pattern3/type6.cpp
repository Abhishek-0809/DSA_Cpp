// SAME AS type5
/*
E D C B A
E D C B A
E D C B A
E D C B A
E D C B A
 */
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter a number : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + n - j;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
