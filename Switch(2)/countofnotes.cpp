// number of notes calculator
#include <iostream>
using namespace std;
int main()
{

    int amt;
    cout << "Enter a Amount : ";
    cin >> amt;
    int num = 1;
    int n500, n200, n100, n50, n20, n10, n1;

    switch (num)
    {
    case 1:
        n500 = (amt / 500);
        amt = amt - (n500 * 500);
        cout << "500 rs notes = " << n500 << endl;
        num++;

    case 2:
        n200 = (amt / 200);
        amt = amt - (n200 * 200);
        cout << "200 rs notes = " << n200 << endl;
        num++;

    case 3:
        n100 = (amt / 100);
        amt = amt - (n100 * 100);
        cout << "100 rs notes = " << n100 << endl;
        num++;

    case 4:
        n50 = (amt / 50);
        amt = amt - (n50 * 50);
        cout << "50 rs notes = " << n50 << endl;
        num++;

    case 5:
        n20 = (amt / 20);
        amt = amt - (n20 * 20);
        cout << "20 rs notes = " << n20 << endl;
        num++;

    case 6:
        n10 = (amt / 10);
        amt = amt - (n10 * 10);
        cout << "10 rs notes = " << n10 << endl;
        num++;

    case 7:
        n1 = (amt / 1);
        amt = amt - (n1 * 1);
        cout << "1 rs notes = " << n1 << endl;
    }
}