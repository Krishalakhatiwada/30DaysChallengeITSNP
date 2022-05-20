#include <iostream>
using namespace std;
// add two 3*3 matrices

class matrix
{
    int arr[3][3];

public:
    matrix()
    {
    }
    matrix(const matrix &m2)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j] = m2.arr[i][j];
            }
        }
    }
    void SetMatrix()

    {
        cout << "Enter elements :";

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void displayMatrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << "   ";
            }
            cout << endl;
        }
        cout<<endl;
    }
    matrix operator+(matrix m1)
    {

        matrix m3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m3.arr[i][j] = arr[i][j] + m1.arr[i][j];
            }
        }
        return m3;
    }
};
int main()
{
    matrix m, matobj;
    m.SetMatrix();
    matobj.SetMatrix();
    m.displayMatrix();
    matobj.displayMatrix();
    matrix sum = m + matobj;
    sum.displayMatrix();
}