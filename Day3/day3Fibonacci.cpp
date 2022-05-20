#include <iostream>
using namespace std;
/*  Fibonacci Series:
In case of fibonacci series, next number
is the sum of previous two numbers
 for example:
 0, 1, 1, 2, 3, 5, 8, 13, 21 etc.
 The first two numbers of fibonacci series are 0 and 1.

*/
int main()
{
    int num1 = 0, num2 = 1, num3, i;
    int count;
    cout << " Enter a number count:";
    cin >> count;
    cout << num1 << " " << num2 << " ";
    for (i = 2; i < count; ++i)
    {
        num3 = num1 + num2;
        cout << num3 << " ";

        num1 = num2;
        num2 = num3;
    }
    return 0;
}