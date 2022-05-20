#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i < 10)
    {
        int j = 0;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << "*****************************" << endl;
    i = 1;
    while (i <= 10)
    {
        int j = 1;
        while (j <= 10)
        {

            // code
            if ((i + j) < 11)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }

            j++;
        }
        cout << endl;
        i++;
    }
}
