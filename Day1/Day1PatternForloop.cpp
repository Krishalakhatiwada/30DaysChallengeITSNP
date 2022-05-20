#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "*************************************" << endl;
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {

            cout << " ";
        }
        for (int j = 10; j > i - 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "**************Alternatively by matrix logic***********************" << endl;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if ((i + j) < 11)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    
}