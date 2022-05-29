//a program to throw an exception from a function which is called from within the try block.

#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

void func(int x)
{
    if (x > 0 || x < 0)
    {
        cout << "Inverse:" << 1 / (float)x;
    }
    else
    {

        throw x;
    }
}
int main()
{

    int x;
    cout << "Enter a number:";
    cin >> x;

    try
    {
     func(x);
    }

    catch (int x)
    {
        cout<<"Inverse donot exist";
    }
}