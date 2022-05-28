#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    try
    {
        if (num == 0)
        {
            throw num;
        }
        else
        {
            cout << "Inverse:" << 1 / (float)num;
        }
    }
    catch (int num)
    {
        cout << "It has no inverse" << endl;
    }
}
